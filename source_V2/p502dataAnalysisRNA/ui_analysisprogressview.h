/********************************************************************************
** Form generated from reading UI file 'analysisprogressview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISPROGRESSVIEW_H
#define UI_ANALYSISPROGRESSVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_analysisProgressView
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QWidget *analysisProgressView)
    {
        if (analysisProgressView->objectName().isEmpty())
            analysisProgressView->setObjectName(QString::fromUtf8("analysisProgressView"));
        analysisProgressView->resize(442, 73);
        gridLayout_2 = new QGridLayout(analysisProgressView);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(analysisProgressView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(analysisProgressView);

        QMetaObject::connectSlotsByName(analysisProgressView);
    } // setupUi

    void retranslateUi(QWidget *analysisProgressView)
    {
        analysisProgressView->setWindowTitle(QApplication::translate("analysisProgressView", "analysisProgressView", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("analysisProgressView", "Data analysis is running", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("analysisProgressView", "CurrentStatusDisplayedHerePlaceHolder", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("analysisProgressView", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class analysisProgressView: public Ui_analysisProgressView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISPROGRESSVIEW_H
