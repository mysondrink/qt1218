/**══════════════════════════════════╗
*作    者：mysondrink                                          ║
**GitHub ：https://github.com/mysondrink/qt1218.git            ║
*═══════════════════════════════════╣
*创建时间：2023/12/18
*功能描述：后台管理登录页面，输入设备对应IP进入软件主界面
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
 *
 */
#include "homepage.h"


homePage::homePage(QWidget* parent)
	: QWidget(parent)
	, ui(new Ui::homeClass)
{
	ui->setupUi(this);
	this->InitUI();
}

homePage::~homePage() noexcept
{
	delete ui;
}

void homePage::InitUI() {
	this->setFocusPolicy(Qt::NoFocus);
}

void homePage::on_btnConfirm_clicked() {
	QString ip_addr = this->ui->lineEdit->text();
	CheckConnectThread* thread = new CheckConnectThread(ip_addr);
	connect(thread, SIGNAL(update_json(JSON)), this, SLOT(getInfo(JSON)));
	thread->start();
}

void homePage::on_btnInfo_clicked() {
	qDebug() << "info!";
	QMessageBox::about(NULL, "about", "<font color='red'>软件使用说明</font>");
}

void homePage::getInfo(JSON msg) {
	QString info_msg = msg.info;
	int code_msg = msg.code;
	QThread* status_msg = msg.status;
	qDebug() << info_msg;
	if (code_msg == failed_code) {
		QMessageBox::critical(NULL, tr("错误"), tr("ip地址错误，请确定ip地址"));
		return;
	}
	else if (code_msg == succeed_code) {
		sysPage* nextPage = new sysPage();
		connect(nextPage, SIGNAL(closed()), this, SLOT(show()));
		nextPage->show();
		this->hide();
	}
}