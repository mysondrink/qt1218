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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QComboBox *typeCb;
    QPushButton *btnConfirm;
    QPushButton *btnReturn;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnPre;
    QLabel *label1;
    QLabel *total_label;
    QLabel *label_3;
    QLabel *page_label;
    QPushButton *btnNext;

    void setupUi(QWidget *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QString::fromUtf8("SearchForm"));
        SearchForm->resize(1300, 800);
        horizontalLayout_2 = new QHBoxLayout(SearchForm);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SearchForm);
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

        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

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
        btnPre = new QPushButton(frame);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));

        horizontalLayout_3->addWidget(btnPre);

        label1 = new QLabel(frame);
        label1->setObjectName(QString::fromUtf8("label1"));

        horizontalLayout_3->addWidget(label1);

        total_label = new QLabel(frame);
        total_label->setObjectName(QString::fromUtf8("total_label"));

        horizontalLayout_3->addWidget(total_label);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        page_label = new QLabel(frame);
        page_label->setObjectName(QString::fromUtf8("page_label"));

        horizontalLayout_3->addWidget(page_label);

        btnNext = new QPushButton(frame);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));

        horizontalLayout_3->addWidget(btnNext);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(SearchForm);

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QWidget *SearchForm)
    {
        SearchForm->setWindowTitle(QCoreApplication::translate("SearchForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SearchForm", "\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("SearchForm", "\350\247\204\346\240\274", nullptr));
        btnConfirm->setText(QCoreApplication::translate("SearchForm", "\346\237\245\346\211\276", nullptr));
        btnReturn->setText(QCoreApplication::translate("SearchForm", "\350\277\224\345\233\236", nullptr));
        btnPre->setText(QCoreApplication::translate("SearchForm", "\344\270\212\344\270\200\351\241\265", nullptr));
        label1->setText(QCoreApplication::translate("SearchForm", "\351\241\265\346\225\260", nullptr));
        total_label->setText(QString());
        label_3->setText(QCoreApplication::translate("SearchForm", "\345\275\223\345\211\215\351\241\265\346\225\260", nullptr));
        page_label->setText(QString());
        btnNext->setText(QCoreApplication::translate("SearchForm", "\344\270\213\344\270\200\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SEARCH_H
