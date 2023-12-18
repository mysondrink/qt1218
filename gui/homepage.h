/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btnConfirm;
    QLabel *label_2;
    QPushButton *btnInfo;

    void setupUi(QMainWindow *homepageClass)
    {
        if (homepageClass->objectName().isEmpty())
            homepageClass->setObjectName(QString::fromUtf8("homepageClass"));
        homepageClass->resize(600, 400);
        centralWidget = new QWidget(homepageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(151, 121, 28, 27));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(316, 121, 133, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        btnConfirm = new QPushButton(centralWidget);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(316, 317, 75, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnConfirm->sizePolicy().hasHeightForWidth());
        btnConfirm->setSizePolicy(sizePolicy1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 40, 321, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        btnInfo = new QPushButton(centralWidget);
        btnInfo->setObjectName(QString::fromUtf8("btnInfo"));
        btnInfo->setGeometry(QRect(151, 317, 75, 23));
        sizePolicy.setHeightForWidth(btnInfo->sizePolicy().hasHeightForWidth());
        btnInfo->setSizePolicy(sizePolicy);
        homepageClass->setCentralWidget(centralWidget);

        retranslateUi(homepageClass);

        QMetaObject::connectSlotsByName(homepageClass);
    } // setupUi

    void retranslateUi(QMainWindow *homepageClass)
    {
        homepageClass->setWindowTitle(QCoreApplication::translate("homepageClass", "homepage", nullptr));
        label->setText(QCoreApplication::translate("homepageClass", "IP", nullptr));
        btnConfirm->setText(QCoreApplication::translate("homepageClass", "\347\241\256\350\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("homepageClass", "\350\215\247\345\205\211\345\210\206\346\236\220\344\273\252\345\220\216\345\217\260\347\256\241\347\220\206\350\275\257\344\273\266", nullptr));
        btnInfo->setText(QCoreApplication::translate("homepageClass", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homepageClass: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HOMEPAGE_H
