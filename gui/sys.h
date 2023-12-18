/********************************************************************************
** Form generated from reading UI file 'sys.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SYS_H
#define SYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QPushButton *btnReturn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnUser;
    QPushButton *btnData;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(600, 400);
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnReturn = new QPushButton(frame);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(500, 330, 75, 23));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 100, 181, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnUser = new QPushButton(widget);
        btnUser->setObjectName(QString::fromUtf8("btnUser"));

        verticalLayout->addWidget(btnUser);

        btnData = new QPushButton(widget);
        btnData->setObjectName(QString::fromUtf8("btnData"));

        verticalLayout->addWidget(btnData);


        horizontalLayout->addWidget(frame);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        btnReturn->setText(QCoreApplication::translate("Form", "\350\277\224\345\233\236", nullptr));
        btnUser->setText(QCoreApplication::translate("Form", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btnData->setText(QCoreApplication::translate("Form", "\350\265\204\346\272\220\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SYS_H
