/**══════════════════════════════════╗
*作    者：mysondrink                                          ║
**GitHub ：https://github.com/mysondrink/qt1218.git            ║
*═══════════════════════════════════╣
*创建时间：2023/12/20                                                           
*功能描述：测试后台连接的线程                                                            
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
 *  EASY C++
 */
#include "connectThread.h"

CheckConnectThread::CheckConnectThread(QString ip_addr, QObject *parent): QThread(parent), ip_addr(ip_addr) {
	connect(this, SIGNAL(finished()), this, SLOT(deleteLater()));
}

void CheckConnectThread::run() {
	// 注册JSON类型
	qRegisterMetaType<JSON>("JSON");
    // 需要修改
    this->checkNetWorkOnline();
    exec(); // 开启事件循环 
}

void CheckConnectThread::checkNetWorkOnline()
{   
    // 创建QNetworkAccessManager对象  
    manager = new QNetworkAccessManager();
    // 连接manager的finished信号到checkUrlFinished槽函数  
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(checkUrlFinished(QNetworkReply*)));
    QSettings settings("C:\\Users\\YGS_Tu\\Desktop\\code\\c\\qt1218\\config\\config.ini", QSettings::IniFormat);
    settings.beginGroup("server");
    QString _url = settings.value("url").toString();
    settings.endGroup();
    QUrl url = QUrl::fromUserInput(ip_addr + _url);
    //params.addQueryItem("key2", "value2");
    QNetworkRequest request(url);
    qDebug() << url << endl;
    manager->get(request);
}

void CheckConnectThread::checkUrlFinished(QNetworkReply* reply)
{
    // 检查请求是否成功  
    if (reply->error() == QNetworkReply::NoError) {
        qDebug() << "URL is reachable!";
        QSettings settings("C:\\Users\\YGS_Tu\\Desktop\\code\\c\\qt1218\\config\\config.ini", QSettings::IniFormat);
        settings.beginGroup("server");
        settings.setValue("ip", ip_addr);
        settings.endGroup();
        JSON emit_json;
        emit_json.info = "";
        emit_json.code = succeed_code;
        emit_json.status = NULL;
        emit this->update_json(emit_json);
    }
    else {
        qDebug() << "URL is not reachable! Error: " << reply->errorString();
        JSON emit_json;
        emit_json.info = "";
        emit_json.code = failed_code;
        emit_json.status = NULL;
        emit this->update_json(emit_json);
    }
    // 释放资源并删除reply对象  
    reply->deleteLater();
    quit(); // 退出事件循环
    this->deleteLater();
}
