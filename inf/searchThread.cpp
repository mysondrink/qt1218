/**══════════════════════════════════╗
*作    者：mysondrink                                          ║
**GitHub ：https://github.com/mysondrink/qt1218.git            ║
*═══════════════════════════════════╣
*创建时间：2023/12/21
*功能描述：发送请求线程
*
*
*═══════════════════════════════════╣
*结束时间:
*═══════════════════════════════════╝
*
 *                                         ,s555SB@@&
 *                                      :9H####@@@@@Xi
 *                                     1@@@@@@@@@@@@@@8
 *                                   ,8@@@@@@@@@B@@@@@@8
 *                                  :B@@@@X3hi8Bs;B@@@@@Ah,
 *             ,8i                  r@@@B:     1S ,M@@@@@@#8;
 *            1AB35.i:               X@@8 .   SGhr ,A@@@@@@@@S
 *            1@h31MX8                18Hhh3i .i3r ,A@@@@@@@@@5
 *            ;@&i,58r5                 rGSS:     :B@@@@@@@@@@A
 *             1#i  . 9i                 hX.  .: .5@@@@@@@@@@@1
 *              sG1,  ,G53s.              9#Xi;hS5 3B@@@@@@@B1
 *               .h8h.,A@@@MXSs,           #@H1:    3ssSSX@1
 *               s ,@@@@@@@@@@@@Xhi,       r#@@X1s9M8    .GA981
 *               ,. rS8H#@@@@@@@@@@#HG51;.  .h31i;9@r    .8@@@@BS;i;
 *                .19AXXXAB@@@@@@@@@@@@@@#MHXG893hrX#XGGXM@@@@@@@@@@MS
 *                s@@MM@@@hsX#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&,
 *              :GB@#3G@@Brs ,1GM@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B,
 *            .hM@@@#@@#MX 51  r;iSGAM@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8
 *          :3B@@@@@@@@@@@&9@h :Gs   .;sSXH@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:
 *      s&HA#@@@@@@@@@@@@@@M89A;.8S.       ,r3@@@@@@@@@@@@@@@@@@@@@@@@@@@r
 *   ,13B@@@@@@@@@@@@@@@@@@@5 5B3 ;.         ;@@@@@@@@@@@@@@@@@@@@@@@@@@@i
 *  5#@@#&@@@@@@@@@@@@@@@@@@9  .39:          ;@@@@@@@@@@@@@@@@@@@@@@@@@@@;
 *  9@@@X:MM@@@@@@@@@@@@@@@#;    ;31.         H@@@@@@@@@@@@@@@@@@@@@@@@@@:
 *   SH#@B9.rM@@@@@@@@@@@@@B       :.         3@@@@@@@@@@@@@@@@@@@@@@@@@@5
 *     ,:.   9@@@@@@@@@@@#HB5                 .M@@@@@@@@@@@@@@@@@@@@@@@@@B
 *           ,ssirhSM@&1;i19911i,.             s@@@@@@@@@@@@@@@@@@@@@@@@@@S
 *              ,,,rHAri1h1rh&@#353Sh:          8@@@@@@@@@@@@@@@@@@@@@@@@@#:
 *            .A3hH@#5S553&@@#h   i:i9S          #@@@@@@@@@@@@@@@@@@@@@@@@@A.
 *
 *	EASY C++
 */
#include "searchThread.h"

GetInfoThread::GetInfoThread(QString search_time, QString search_type, int page_num, int page_size, QObject* parent) 
: search_time(search_time), search_type(search_type), page_num(page_num), page_size(page_size), QThread(parent) {
	qDebug() << "start!";
}

void GetInfoThread::run() {
	// 注册JSON类型
	qRegisterMetaType<MYJSON>("MYJSON");
	this->sendGet();
	exec(); // 开启事件循环
}

void GetInfoThread::sendGet() {
	qDebug() << "GET!";
	/*
	工作类对象GetInfoThread的构造函数都是在主线程中进行的,manager = new QNetworkAccessManager(this)
	相当于把manager 在主线程中实例化为变量,所以在执行GetInfoThread的connect方法时,在子线程中直接调用了主线程中的变量manager,导致错误。
	如果使用 manager = new QNetworkAccessManager(),因为没有父对象，因此它是只在GetInfoThread工作函数中实例化的,属于子线程中的变量，这时调用就不报错了
	*/
	manager = new QNetworkAccessManager();
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(onRequestFinished(QNetworkReply*)));
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(deleteLater()));
	QString get_url = this->configParams();
	QUrl url = QUrl::fromUserInput(get_url);
	QUrlQuery params;
	params.addQueryItem("Reagent_time", search_time);
	params.addQueryItem("Reagent_type", search_type);
	params.addQueryItem("Page", QString::number(page_num));
	params.addQueryItem("Page_size", QString::number(page_size));
	//params.addQueryItem("key2", "value2");
	url.setQuery(params);
	QNetworkRequest request(url);
	qDebug() << get_url << endl << url;
	manager->get(request);
}

void GetInfoThread::onRequestFinished(QNetworkReply* reply) {
	if (reply->error() == QNetworkReply::NoError) {
		qDebug() << "Succeed! ";
		QByteArray data = reply->readAll();
		//QJsonObject data_json_object;
		//data_json_object = QJsonDocument::fromJson(ary).object();
		MYJSON data_json;
		data_json.code = succeed_code;
		data_json.data = data;
		emit this->update_json(data_json);
	}
	else {
		qDebug() << "Error: " << reply->errorString();
		QByteArray data = NULL;
		MYJSON data_json;
		data_json.code = failed_code;
		data_json.data = data;
		emit this->update_json(data_json);
	}
	emit this->reply_finished();
	reply->deleteLater();
	quit(); // 退出事件循环
	this->deleteLater();
}

QString GetInfoThread::configParams() {
	QSettings settings("C:\\Users\\YGS_Tu\\Desktop\\code\\c\\qt1218\\config\\config.ini", QSettings::IniFormat);//此处直接填写的是文件路径

	//beginGroup和endGroup可设置一级标题，中间的setValue为设置的参数
	settings.beginGroup("server");
	QString ip = settings.value("ip").toString();
	QString url = settings.value("url2").toString();
	settings.endGroup();

	return ip + url;
}