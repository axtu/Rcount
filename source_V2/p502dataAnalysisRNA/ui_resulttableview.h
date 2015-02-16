/********************************************************************************
** Form generated from reading UI file 'resulttableview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTTABLEVIEW_H
#define UI_RESULTTABLEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultTableView
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *findLineEdit;
    QPushButton *findPushButton;

    void setupUi(QWidget *resultTableView)
    {
        if (resultTableView->objectName().isEmpty())
            resultTableView->setObjectName(QString::fromUtf8("resultTableView"));
        resultTableView->resize(271, 263);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(resultTableView->sizePolicy().hasHeightForWidth());
        resultTableView->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(resultTableView);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(resultTableView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        findLineEdit = new QLineEdit(groupBox);
        findLineEdit->setObjectName(QString::fromUtf8("findLineEdit"));

        horizontalLayout->addWidget(findLineEdit);

        findPushButton = new QPushButton(groupBox);
        findPushButton->setObjectName(QString::fromUtf8("findPushButton"));

        horizontalLayout->addWidget(findPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(resultTableView);

        QMetaObject::connectSlotsByName(resultTableView);
    } // setupUi

    void retranslateUi(QWidget *resultTableView)
    {
        resultTableView->setWindowTitle(QApplication::translate("resultTableView", "resultTableView", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("resultTableView", "Results", 0, QApplication::UnicodeUTF8));
        findPushButton->setText(QApplication::translate("resultTableView", "find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class resultTableView: public Ui_resultTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTTABLEVIEW_H
