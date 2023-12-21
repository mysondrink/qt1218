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

class Ui_SysForm
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QPushButton *btnReturn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnUser;
    QPushButton *btnSearch;

    void setupUi(QWidget *SysForm)
    {
        if (SysForm->objectName().isEmpty())
            SysForm->setObjectName(QString::fromUtf8("SysForm"));
        SysForm->resize(600, 400);
        horizontalLayout = new QHBoxLayout(SysForm);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SysForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btnReturn = new QPushButton(frame);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(500, 330, 75, 23));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 100, 181, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnUser = new QPushButton(layoutWidget);
        btnUser->setObjectName(QString::fromUtf8("btnUser"));

        verticalLayout->addWidget(btnUser);

        btnSearch = new QPushButton(layoutWidget);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));

        verticalLayout->addWidget(btnSearch);


        horizontalLayout->addWidget(frame);


        retranslateUi(SysForm);

        QMetaObject::connectSlotsByName(SysForm);
    } // setupUi

    void retranslateUi(QWidget *SysForm)
    {
        SysForm->setWindowTitle(QCoreApplication::translate("SysForm", "Form", nullptr));
        btnReturn->setText(QCoreApplication::translate("SysForm", "\350\277\224\345\233\236", nullptr));
        btnUser->setText(QCoreApplication::translate("SysForm", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btnSearch->setText(QCoreApplication::translate("SysForm", "\350\265\204\346\272\220\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SysForm: public Ui_SysForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SYS_H
