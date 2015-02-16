/********************************************************************************
** Form generated from reading UI file 'projecttreeview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTTREEVIEW_H
#define UI_PROJECTTREEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projectTreeView
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QPushButton *newPushButton;
    QPushButton *openPushButton;
    QPushButton *closePushButton;
    QPushButton *runPushButton;
    QPushButton *runAllPushButton;

    void setupUi(QWidget *projectTreeView)
    {
        if (projectTreeView->objectName().isEmpty())
            projectTreeView->setObjectName(QString::fromUtf8("projectTreeView"));
        projectTreeView->resize(452, 347);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectTreeView->sizePolicy().hasHeightForWidth());
        projectTreeView->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(projectTreeView);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(projectTreeView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newPushButton = new QPushButton(groupBox);
        newPushButton->setObjectName(QString::fromUtf8("newPushButton"));

        horizontalLayout->addWidget(newPushButton);

        openPushButton = new QPushButton(groupBox);
        openPushButton->setObjectName(QString::fromUtf8("openPushButton"));

        horizontalLayout->addWidget(openPushButton);

        closePushButton = new QPushButton(groupBox);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout->addWidget(closePushButton);

        runPushButton = new QPushButton(groupBox);
        runPushButton->setObjectName(QString::fromUtf8("runPushButton"));

        horizontalLayout->addWidget(runPushButton);

        runAllPushButton = new QPushButton(groupBox);
        runAllPushButton->setObjectName(QString::fromUtf8("runAllPushButton"));

        horizontalLayout->addWidget(runAllPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(projectTreeView);

        QMetaObject::connectSlotsByName(projectTreeView);
    } // setupUi

    void retranslateUi(QWidget *projectTreeView)
    {
        projectTreeView->setWindowTitle(QApplication::translate("projectTreeView", "projectTreeView", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("projectTreeView", "Projects", 0, QApplication::UnicodeUTF8));
        newPushButton->setText(QApplication::translate("projectTreeView", "new", 0, QApplication::UnicodeUTF8));
        openPushButton->setText(QApplication::translate("projectTreeView", "open", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("projectTreeView", "close", 0, QApplication::UnicodeUTF8));
        runPushButton->setText(QApplication::translate("projectTreeView", "run", 0, QApplication::UnicodeUTF8));
        runAllPushButton->setText(QApplication::translate("projectTreeView", "run all", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class projectTreeView: public Ui_projectTreeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTTREEVIEW_H
