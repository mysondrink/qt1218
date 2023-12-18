/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HOME_H
#define HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeClass
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *titleLabel;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *btnInfo;
    QPushButton *btnConfirm;

    void setupUi(QWidget *homeClass)
    {
        if (homeClass->objectName().isEmpty())
            homeClass->setObjectName(QString::fromUtf8("homeClass"));
        homeClass->resize(600, 400);
        horizontalLayout = new QHBoxLayout(homeClass);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(homeClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(270, 60, 54, 12));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 110, 481, 261));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        btnInfo = new QPushButton(widget);
        btnInfo->setObjectName(QString::fromUtf8("btnInfo"));

        gridLayout->addWidget(btnInfo, 1, 0, 1, 1);

        btnConfirm = new QPushButton(widget);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));

        gridLayout->addWidget(btnConfirm, 1, 1, 1, 1);


        horizontalLayout->addWidget(frame);


        retranslateUi(homeClass);

        QMetaObject::connectSlotsByName(homeClass);
    } // setupUi

    void retranslateUi(QWidget *homeClass)
    {
        homeClass->setWindowTitle(QCoreApplication::translate("homeClass", "home", nullptr));
        titleLabel->setText(QCoreApplication::translate("homeClass", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("homeClass", "IP", nullptr));
        btnInfo->setText(QCoreApplication::translate("homeClass", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        btnConfirm->setText(QCoreApplication::translate("homeClass", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeClass: public Ui_homeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HOME_H
