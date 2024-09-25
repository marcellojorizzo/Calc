/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *setButton_1;
    QPushButton *setButton_2;
    QPushButton *setButton_3;
    QPushButton *setButton_4;
    QPushButton *setButton_5;
    QPushButton *setButton_6;
    QPushButton *setButton_7;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineDisplay;
    QLineEdit *linePricePerRoll;
    QLineEdit *lineWeightPerRoll;
    QLineEdit *lineWeightPerPiece;
    QLineEdit *lineMargin;
    QLineEdit *lineFactor;
    QLineEdit *lineTaxRate;
    QLineEdit *lineNumberOfPieces;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(648, 520);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 254, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 255, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 85, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(0, 255, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        QBrush brush8(QColor(212, 255, 191, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(85, 127, 63, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(221, 255, 203, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 380, 181, 71));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        setButton_1 = new QPushButton(centralwidget);
        setButton_1->setObjectName("setButton_1");
        setButton_1->setGeometry(QRect(310, 110, 121, 41));
        QFont font1;
        font1.setBold(false);
        setButton_1->setFont(font1);
        setButton_2 = new QPushButton(centralwidget);
        setButton_2->setObjectName("setButton_2");
        setButton_2->setGeometry(QRect(310, 160, 121, 41));
        setButton_2->setFont(font1);
        setButton_3 = new QPushButton(centralwidget);
        setButton_3->setObjectName("setButton_3");
        setButton_3->setGeometry(QRect(310, 210, 121, 41));
        setButton_3->setFont(font1);
        setButton_4 = new QPushButton(centralwidget);
        setButton_4->setObjectName("setButton_4");
        setButton_4->setGeometry(QRect(310, 260, 121, 41));
        setButton_5 = new QPushButton(centralwidget);
        setButton_5->setObjectName("setButton_5");
        setButton_5->setGeometry(QRect(310, 310, 121, 41));
        setButton_6 = new QPushButton(centralwidget);
        setButton_6->setObjectName("setButton_6");
        setButton_6->setGeometry(QRect(310, 360, 121, 41));
        setButton_7 = new QPushButton(centralwidget);
        setButton_7->setObjectName("setButton_7");
        setButton_7->setGeometry(QRect(310, 410, 121, 41));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(10, 110, 171, 51));
        label_1->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 160, 171, 51));
        label_2->setFont(font);
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 171, 51));
        label_3->setFont(font);
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 260, 171, 51));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 310, 171, 51));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 360, 171, 51));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 410, 171, 51));
        label_7->setFont(font);
        lineDisplay = new QLineEdit(centralwidget);
        lineDisplay->setObjectName("lineDisplay");
        lineDisplay->setGeometry(QRect(20, 20, 611, 81));
        linePricePerRoll = new QLineEdit(centralwidget);
        linePricePerRoll->setObjectName("linePricePerRoll");
        linePricePerRoll->setGeometry(QRect(180, 110, 121, 41));
        lineWeightPerRoll = new QLineEdit(centralwidget);
        lineWeightPerRoll->setObjectName("lineWeightPerRoll");
        lineWeightPerRoll->setGeometry(QRect(180, 160, 121, 41));
        lineWeightPerPiece = new QLineEdit(centralwidget);
        lineWeightPerPiece->setObjectName("lineWeightPerPiece");
        lineWeightPerPiece->setGeometry(QRect(180, 210, 121, 41));
        lineMargin = new QLineEdit(centralwidget);
        lineMargin->setObjectName("lineMargin");
        lineMargin->setGeometry(QRect(180, 310, 121, 41));
        lineFactor = new QLineEdit(centralwidget);
        lineFactor->setObjectName("lineFactor");
        lineFactor->setGeometry(QRect(180, 260, 121, 41));
        lineTaxRate = new QLineEdit(centralwidget);
        lineTaxRate->setObjectName("lineTaxRate");
        lineTaxRate->setGeometry(QRect(180, 360, 121, 41));
        lineNumberOfPieces = new QLineEdit(centralwidget);
        lineNumberOfPieces->setObjectName("lineNumberOfPieces");
        lineNumberOfPieces->setGeometry(QRect(180, 410, 121, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 120, 171, 221));
        QFont font2;
        font2.setPointSize(21);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 648, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        setButton_1->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_2->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_3->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_4->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_5->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_6->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_7->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Preis pro Filament Rolle in \342\202\254", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gewicht Filament Rolle in Gramm", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Gewicht pro Werkst\303\274ck in Gramm", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Faktor", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gewinnzuschlag in %", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MwSt in %", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Anzahl Werkst\303\274cke", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "3D_Print Coast Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
