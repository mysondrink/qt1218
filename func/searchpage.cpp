/**══════════════════════════════════╗
*作    者：mysondrink                                          ║
**GitHub ：https://github.com/mysondrink/qt1218.git            ║
*═══════════════════════════════════╣
*创建时间： 2023/12/21
*功能描述： 资源管理查询界面
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
#include "searchpage.h"

const QList<QString> headers = { QString::fromLocal8Bit("编号") , QString::fromLocal8Bit("测试时间"), QString::fromLocal8Bit("试剂编号"), QString::fromLocal8Bit("试剂条形码"), QString::fromLocal8Bit("医生"), QString::fromLocal8Bit("部门"), QString::fromLocal8Bit("试剂卡类型"), QString::fromLocal8Bit("姓名"), QString::fromLocal8Bit("性别"), QString::fromLocal8Bit("年龄") };
//const QList<QString> headers = {
//	QString::fromLocal8Bit("编号"),
//	QString::fromLocal8Bit("测试时间"),
//	QString::fromLocal8Bit("试剂编号"),
//	QString::fromLocal8Bit("试剂条形码"),
//	QString::fromLocal8Bit("医生"),
//	QString::fromLocal8Bit("部门"),
//	QString::fromLocal8Bit("试剂卡类型"),
//	QString::fromLocal8Bit("姓名"),
//	QString::fromLocal8Bit("性别"),
//	QString::fromLocal8Bit("年龄"),
//};

//const QList<QString> headers = {
//	QString("bianhao") , QString("ceshishijian"), QString("shijibianhao"), \
//	QString("shijitiaoxingma"), QString("yisheng"), QString("bumen"), \
//	QString("shijikaleixing"), QString("xingming"), QString("xingbie"), QString("nianling"), \
//};

static int page_num = 1;
const int page_size = 15;

searchPage::searchPage(QWidget* parent) : QWidget(parent), ui(new Ui::SearchForm) {
	ui->setupUi(this);
	this->setReagentType();
	this->InitUI();
}

searchPage::~searchPage() noexcept {
	delete ui;
}

void searchPage::InitUI() {
	// 注册JSON类型
	qRegisterMetaType<MYJSON>("MYJSON");
	this->setFocusPolicy(Qt::NoFocus);
	this->ui->dateEdit->setCalendarPopup(true);
	this->ui->dateEdit->setDateTime(QDateTime::currentDateTime());
	this->ui->tableView->setModel(&model);
	// 设置表格不可编辑
	this->ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	// 设置整行选中
	this->ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	this->ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	this->ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void searchPage::getTypeInfo(QByteArray msg) {
	QByteArray data = msg;
	// 多级json解析
	obj_list = {};
	QJsonParseError jsonError;
	QJsonDocument doucment = QJsonDocument::fromJson(data, &jsonError);  // 转化为 JSON 文档
	if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {  // 解析未发生错误
		if (doucment.isObject()) {  // JSON 文档为对象
			QJsonObject object = doucment.object();  // 转化为对象
			if (object.contains("data")) {
				QJsonValue value = object.value("data");
				if (value.isObject()) {  // data 是对象
					QJsonObject obj = value.toObject();
					if (obj.contains("data")) {
						QJsonValue value = obj.value("data");
						if (value.isArray()) {  // data 是数组
							QJsonArray array = value.toArray();
							int nSize = array.size();
							qDebug() << nSize;
							for (int i = 0; i < nSize; ++i) {
								QJsonValue value = array.at(i);
								if (value.isObject()) {
									QJsonObject obj = value.toObject();
									obj_list.append(obj);
								}
							}
						}
					}
				}
			}
		}
	}
	for (int j = 0; j < obj_list.size(); ++j) {
		QString item = obj_list[j].value("reagent_type").toString();
		this->ui->typeCb->addItem(item);
	}
	qDebug() << "obj_list" << obj_list;
}

void searchPage::setReagentType() {
	QSettings settings("C:\\Users\\YGS_Tu\\Desktop\\code\\c\\qt1218\\config\\config.ini", QSettings::IniFormat);
	settings.beginGroup("server");
	QString ip_addr = settings.value("ip").toString();
	settings.endGroup();
	CheckConnectThread* thread = new CheckConnectThread(ip_addr);
	connect(thread, SIGNAL(update_total(QByteArray)), this, SLOT(getTypeInfo(QByteArray)));
	thread->start();
}

void searchPage::closeEvent(QCloseEvent*) {
	emit this->closed();
}

void searchPage::getJsonData(MYJSON msg) {
	QByteArray data = msg.data;
	int code = msg.code;
	if (code == failed_code) {
		QMessageBox::critical(NULL, tr("错误"), tr("ip地址错误，请确定ip地址"));
		return;
	}
	//if (data["code"] != 200) {
	//	QMessageBox::critical(NULL, tr("错误"), tr("ip地址错误，请确定ip地址"));
	//	return;
	//}
	// 多级json解析
	obj_list = {};
	QJsonParseError jsonError;
	QJsonDocument doucment = QJsonDocument::fromJson(data, &jsonError);  // 转化为 JSON 文档
	if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {  // 解析未发生错误
		if (doucment.isObject()) {  // JSON 文档为对象
			QJsonObject object = doucment.object();  // 转化为对象
			if (object.contains("msg")) {
				QJsonValue value = object.value("msg");
				if (value.isString()) {
					QString msg = value.toString();
					qDebug() << "msg : " << msg;
				}
			}
			if (object.contains("code")) {
				QJsonValue value = object.value("code");
				if (value.isDouble()) {
					int code = value.toVariant().toInt();
					qDebug() << "code : " << code;
				}
				else {
					qDebug() << "code : " << code;
				}
			}
			if (object.contains("data")) {
				QJsonValue value = object.value("data");
				if (value.isObject()) {  // data 是对象
					QJsonObject obj = value.toObject();
					qDebug() << "666";
					if (obj.contains("data")) {
						QJsonValue value = obj.value("data");
						if (value.isArray()) {  // data 是数组
							QJsonArray array = value.toArray();
							int nSize = array.size();
							qDebug() << nSize;
							for (int i = 0; i < nSize; ++i) {
								QJsonValue value = array.at(i);
								if (value.isObject()) {
									QJsonObject obj = value.toObject();
									obj_list.append(obj);
								}
							}
						}
					}
					if (obj.contains("total")) {
						QJsonValue value = obj.value("total");
						if (value.isDouble()) {
							int total = value.toVariant().toInt();
							total_page = total;
						}
					}
				}
			}
		}
	}
	this->showDataTable();
}

void searchPage::setDataTable() {
	model.clear();
	int pagesize = 15;
	model.setRowCount(pagesize);
	model.setColumnCount(headers.length());
	for (int k = 0; k < headers.length(); k++) {
		model.setHeaderData(k, Qt::Horizontal, headers[k]);
	}
}

void searchPage::showDataTable() {
	this->ui->total_label->setText(QString::number(total_page));
	this->ui->page_label->setText(QString::number(page_num));
	this->setDataTable();
	int len = obj_list.length();
	for (int i = 0; i < len; i++) {
		QJsonObject obj = obj_list[i];
		if (obj.contains("patient_id")) {
			//int a = obj.value("patient_id").toVariant();
			//int b = obj.value("patient_id").toInt();
			QStandardItem* item = new QStandardItem(obj.value("patient_id").toVariant().toString());
			model.setItem(i, 0, item);
		}
		if (obj.contains("reagent_time_detail")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_time_detail").toString());
			model.setItem(i, 1, item);
		}
		if (obj.contains("reagent_id")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_id").toVariant().toString());
			model.setItem(i, 2, item);
		}
		if (obj.contains("reagent_code")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_code").toString());
			model.setItem(i, 3, item);
		}
		if (obj.contains("doctor")) {
			QStandardItem* item = new QStandardItem(obj.value("doctor").toString());
			model.setItem(i, 4, item);
		}
		if (obj.contains("depart")) {
			QStandardItem* item = new QStandardItem(obj.value("depart").toString());
			model.setItem(i, 5, item);
		}
		if (obj.contains("reagent_matrix")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_matrix").toString());
			model.setItem(i, 6, item);
		}
		if (obj.contains("patient_name")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_name").toString());
			model.setItem(i, 7, item);
		}
		if (obj.contains("patient_gender")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_gender").toString());
			model.setItem(i, 8, item);
		}
		if (obj.contains("patient_age")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_age").toString());
			model.setItem(i, 9, item);
		}
	}
}

void searchPage::on_btnReturn_clicked() {
	emit this->closed();
	this->close();
}

void searchPage::on_btnConfirm_clicked() {
	qDebug() << "confirm!";
	
	//search_time = "2023-12-06";
	//search_type = "Reagent_time";
	QDate date_time = this->ui->dateEdit->date();
	//日期
	QString year = QString::number(date_time.year());         //年
	QString month = QString::number(date_time.month());      //月
	QString day = QString::number(date_time.day());         //日
	search_time = year + "-" + month + "-" + day;
	search_type = this->ui->typeCb->currentText();
	qDebug() << "search_type" << search_type;
	qDebug() << "search_time" << search_time;
	page_num = 1;
	GetInfoThread* thread = new GetInfoThread(search_time, search_type, page_num, page_size);
	connect(thread, SIGNAL(update_json(MYJSON)), this, SLOT(getJsonData(MYJSON)));
	thread->start();
}

void searchPage::on_btnNext_clicked() {
	qDebug() << "next!";
	qDebug() << "confirm!";
	//search_time = "2023-12-06";
	//search_type = "Reagent_time";
	qDebug() << "total_page" << total_page;
	if (page_num != total_page) {
		++page_num;
		qDebug() << "True";
	}
	GetInfoThread* thread = new GetInfoThread(search_time, search_type, page_num, page_size);
	connect(thread, SIGNAL(update_json(MYJSON)), this, SLOT(getJsonData(MYJSON)));
	thread->start();
}

void searchPage::on_btnPre_clicked() {
	qDebug() << "pre!";
	qDebug() << "confirm!";
	//search_time = "2023-12-06";
	//search_type = "Reagent_time";
	if (page_num != 1) {
		--page_num;
	}
	GetInfoThread* thread = new GetInfoThread(search_time, search_type, page_num, page_size);
	connect(thread, SIGNAL(update_json(MYJSON)), this, SLOT(getJsonData(MYJSON)));
	thread->start();
}