/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DATA_H
#define DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *picLabel;
    QLabel *photoLabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnPrint;
    QPushButton *btnDownload;
    QPushButton *btnPic;
    QPushButton *btnData;
    QPushButton *btnReport;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        picLabel = new QLabel(frame);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));

        horizontalLayout_2->addWidget(picLabel);

        photoLabel = new QLabel(frame);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));

        horizontalLayout_2->addWidget(photoLabel);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnPrint = new QPushButton(frame);
        btnPrint->setObjectName(QString::fromUtf8("btnPrint"));

        horizontalLayout_3->addWidget(btnPrint);

        btnDownload = new QPushButton(frame);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));

        horizontalLayout_3->addWidget(btnDownload);

        btnPic = new QPushButton(frame);
        btnPic->setObjectName(QString::fromUtf8("btnPic"));

        horizontalLayout_3->addWidget(btnPic);

        btnData = new QPushButton(frame);
        btnData->setObjectName(QString::fromUtf8("btnData"));

        horizontalLayout_3->addWidget(btnData);

        btnReport = new QPushButton(frame);
        btnReport->setObjectName(QString::fromUtf8("btnReport"));

        horizontalLayout_3->addWidget(btnReport);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addWidget(frame);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        picLabel->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        photoLabel->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        btnPrint->setText(QCoreApplication::translate("Form", "\346\211\223\345\215\260", nullptr));
        btnDownload->setText(QCoreApplication::translate("Form", "\344\270\213\350\275\275", nullptr));
        btnPic->setText(QCoreApplication::translate("Form", "\345\233\276\345\203\217", nullptr));
        btnData->setText(QCoreApplication::translate("Form", "\346\225\260\346\215\256", nullptr));
        btnReport->setText(QCoreApplication::translate("Form", "\346\212\245\345\221\212\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DATA_H
