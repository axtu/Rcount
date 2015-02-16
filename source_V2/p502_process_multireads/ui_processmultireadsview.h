/********************************************************************************
** Form generated from reading UI file 'processmultireadsview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSMULTIREADSVIEW_H
#define UI_PROCESSMULTIREADSVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_processMultireadsView
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QListWidget *queueListWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inputLineEdit;
    QPushButton *inputFind;
    QLabel *label_2;
    QLineEdit *outputLineEdit;
    QPushButton *outputFind;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *processMultireadsView)
    {
        if (processMultireadsView->objectName().isEmpty())
            processMultireadsView->setObjectName(QString::fromUtf8("processMultireadsView"));
        processMultireadsView->resize(662, 208);
        horizontalLayout = new QHBoxLayout(processMultireadsView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(processMultireadsView);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(250, 200));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        queueListWidget = new QListWidget(frame_2);
        queueListWidget->setObjectName(QString::fromUtf8("queueListWidget"));

        gridLayout_2->addWidget(queueListWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(frame_2);

        frame = new QFrame(processMultireadsView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(400, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inputLineEdit = new QLineEdit(frame);
        inputLineEdit->setObjectName(QString::fromUtf8("inputLineEdit"));

        gridLayout->addWidget(inputLineEdit, 0, 1, 1, 2);

        inputFind = new QPushButton(frame);
        inputFind->setObjectName(QString::fromUtf8("inputFind"));

        gridLayout->addWidget(inputFind, 0, 3, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        outputLineEdit = new QLineEdit(frame);
        outputLineEdit->setObjectName(QString::fromUtf8("outputLineEdit"));

        gridLayout->addWidget(outputLineEdit, 1, 1, 1, 2);

        outputFind = new QPushButton(frame);
        outputFind->setObjectName(QString::fromUtf8("outputFind"));

        gridLayout->addWidget(outputFind, 1, 3, 1, 1);

        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(true);
        spinBox->setMaximum(1000000);
        spinBox->setSingleStep(10);
        spinBox->setValue(100);

        gridLayout->addWidget(spinBox, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addWidget(frame);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(inputLineEdit);
        label_2->setBuddy(outputLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(inputLineEdit, inputFind);
        QWidget::setTabOrder(inputFind, outputLineEdit);
        QWidget::setTabOrder(outputLineEdit, outputFind);
        QWidget::setTabOrder(outputFind, checkBox);
        QWidget::setTabOrder(checkBox, spinBox);
        QWidget::setTabOrder(spinBox, buttonBox);

        retranslateUi(processMultireadsView);
        QObject::connect(checkBox, SIGNAL(clicked(bool)), spinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(processMultireadsView);
    } // setupUi

    void retranslateUi(QWidget *processMultireadsView)
    {
        processMultireadsView->setWindowTitle(QApplication::translate("processMultireadsView", "processMultireadsView", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("processMultireadsView", "Input reads (*.bam file)", 0, QApplication::UnicodeUTF8));
        inputFind->setText(QApplication::translate("processMultireadsView", "find", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("processMultireadsView", "Output reads (*.bam file)", 0, QApplication::UnicodeUTF8));
        outputFind->setText(QApplication::translate("processMultireadsView", "find", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("processMultireadsView", "calculate weights, using allocation distance:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class processMultireadsView: public Ui_processMultireadsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMULTIREADSVIEW_H
