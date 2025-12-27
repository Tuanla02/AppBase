/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *IPDevice;
    QVBoxLayout *verticalLayout;
    QPushButton *btnUnlock;
    QPushButton *btnLock;
    QLabel *labelStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(664, 548);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #e0ffff;\n"
"}\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 120, 223, 197));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("#panel {\n"
"    background: white;\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"}\n"
""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 11);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton);

        IPDevice = new QLineEdit(groupBox);
        IPDevice->setObjectName("IPDevice");
        sizePolicy1.setHeightForWidth(IPDevice->sizePolicy().hasHeightForWidth());
        IPDevice->setSizePolicy(sizePolicy1);
        IPDevice->setToolTipDuration(-1);

        horizontalLayout->addWidget(IPDevice);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnUnlock = new QPushButton(groupBox);
        btnUnlock->setObjectName("btnUnlock");
        sizePolicy1.setHeightForWidth(btnUnlock->sizePolicy().hasHeightForWidth());
        btnUnlock->setSizePolicy(sizePolicy1);
        btnUnlock->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"}\n"
""));

        verticalLayout->addWidget(btnUnlock);

        btnLock = new QPushButton(groupBox);
        btnLock->setObjectName("btnLock");
        sizePolicy1.setHeightForWidth(btnLock->sizePolicy().hasHeightForWidth());
        btnLock->setSizePolicy(sizePolicy1);
        btnLock->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"}\n"
""));

        verticalLayout->addWidget(btnLock);

        labelStatus = new QLabel(groupBox);
        labelStatus->setObjectName("labelStatus");
        sizePolicy1.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy1);
        labelStatus->setStyleSheet(QString::fromUtf8("color: #f1c40f;\n"
"font-size: 12px;\n"
""));

        verticalLayout->addWidget(labelStatus);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 664, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "App Smart Door", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Control", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        IPDevice->setPlaceholderText(QCoreApplication::translate("MainWindow", "192.168.1.100", nullptr));
        btnUnlock->setText(QCoreApplication::translate("MainWindow", "M\341\273\237 C\341\273\255a", nullptr));
        btnLock->setText(QCoreApplication::translate("MainWindow", "Kh\303\263a C\341\273\255a", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Status: Disconnected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
