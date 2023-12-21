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

//const QList<QString> headers = { QString("编号") , QString("测试时间"), QString("试剂编号"), QString("试剂条形码"), QString("医生"), QString("部门"), QString("试剂卡类型"), QString("姓名"), QString("性别"), QString("年龄") };
const QList<QString> headers = {
	QString("编号") , QString("测试时间"), QString("试剂编号"), \
	QString("试剂条形码"), QString("医生"), QString("部门"), \
	QString("试剂卡类型"), QString("姓名"), QString("性别"), QString("年龄"), \
};

searchPage::searchPage(QWidget* parent) : QWidget(parent), ui(new Ui::SearchForm) {
	ui->setupUi(this);
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
	this->setDataTable();
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
					if (obj.contains("data")) {
						QJsonValue value = obj.value("data");
						if (value.isArray()) {  // data 是数组
							QJsonArray array = value.toArray();
							int nSize = array.size();
							for (int i = 0; i < nSize; ++i) {
								obj_list = QList<QJsonObject>();
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
	this->showDataTable();
}

void searchPage::setDataTable() {
	int pagesize = 10;
	model.setRowCount(pagesize);
	model.setColumnCount(headers.length());
	this->ui->tableView->setModel(&model);
	for (int k = 0; k < headers.length(); k++) {
		model.setHeaderData(k, Qt::Horizontal, headers[k]);
	}
	// 设置表格不可编辑
	this->ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	// 设置整行选中
	this->ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	this->ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	this->ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void searchPage::showDataTable() {
	int len = obj_list.length();
	for (int i = 0; i < len; i++) {
		QList<QStandardItem*> rowItems;
		QJsonObject obj = obj_list[i];
		if (obj.contains("patient_id")) {
			QStandardItem* item = new QStandardItem(obj.value("patietnt_id").toInt());
			rowItems.append(item);
		}
		if (obj.contains("reagent_time")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_time").toString());
			rowItems.append(item);
		}
		if (obj.contains("reagent_id")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_id").toInt());
			rowItems.append(item);
		}
		if (obj.contains("reagent_code")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_code").toString());
			rowItems.append(item);
		}
		if (obj.contains("doctor")) {
			QStandardItem* item = new QStandardItem(obj.value("doctor").toString());
			rowItems.append(item);
		}
		if (obj.contains("depart")) {
			QStandardItem* item = new QStandardItem(obj.value("depart").toString());
			rowItems.append(item);
		}
		if (obj.contains("reagent_matrix")) {
			QStandardItem* item = new QStandardItem(obj.value("reagent_matrix").toString());
			rowItems.append(item);
		}
		if (obj.contains("patient_name")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_name").toString());
			rowItems.append(item);
		}
		if (obj.contains("patient_gender")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_gender").toString());
			rowItems.append(item);
		}
		if (obj.contains("patient_age")) {
			QStandardItem* item = new QStandardItem(obj.value("patient_age").toString());
			rowItems.append(item);
		}
		model.appendRow(rowItems);
	}
}

void searchPage::on_btnReturn_clicked() {
	emit this->closed();
	this->close();
}

void searchPage::on_btnConfirm_clicked() {
	qDebug() << "confirm!";
	QString search_time = "2023-06-05";
	QString search_type = "Reagent_time";
	GetInfoThread* thread = new GetInfoThread();
	connect(thread, SIGNAL(update_json(MYJSON)), this, SLOT(getJsonData(MYJSON)));
	thread->start();
}

void searchPage::on_btnNext_clicked() {
	qDebug() << "next!";
}

void searchPage::on_btnPre_clicked() {
	qDebug() << "pre!";
}