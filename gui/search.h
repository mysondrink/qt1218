/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SEARCH_H
#define SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *dateCb;
    QLabel *label_2;
    QComboBox *typeCb;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1300, 800);
        horizontalLayout_2 = new QHBoxLayout(Form);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dateCb = new QComboBox(frame);
        dateCb->setObjectName(QString::fromUtf8("dateCb"));

        horizontalLayout->addWidget(dateCb);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        typeCb = new QComboBox(frame);
        typeCb->setObjectName(QString::fromUtf8("typeCb"));

        horizontalLayout->addWidget(typeCb);

        btnConfirm = new QPushButton(frame);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));

        horizontalLayout->addWidget(btnConfirm);

        btnReturn = new QPushButton(frame);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));

        horizontalLayout->addWidget(btnReturn);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\350\247\204\346\240\274", nullptr));
        btnConfirm->setText(QCoreApplication::translate("Form", "\346\237\245\346\211\276", nullptr));
        btnReturn->setText(QCoreApplication::translate("Form", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\344\270\212\344\270\200\351\241\265", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\351\241\265\346\225\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\344\270\213\344\270\200\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SEARCH_H
