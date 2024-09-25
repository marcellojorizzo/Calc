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
#include <QtWidgets/QGridLayout>
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
    QLineEdit *lineDisplay;
    QLabel *label_8;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineMargin;
    QPushButton *setButton_4;
    QLineEdit *lineTaxRate;
    QLineEdit *lineWeightPerRoll;
    QLineEdit *lineFactor;
    QLineEdit *linePricePerRoll;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *setButton_3;
    QPushButton *setButton_7;
    QLabel *label_3;
    QLineEdit *lineWeightPerPiece;
    QLabel *label_1;
    QPushButton *setButton_5;
    QLabel *label_7;
    QPushButton *setButton_6;
    QLabel *label_5;
    QLineEdit *lineNumberOfPieces;
    QPushButton *setButton_2;
    QLabel *label_2;
    QPushButton *setButton_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(413, 535);
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
        pushButton->setGeometry(QRect(10, 340, 381, 71));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        lineDisplay = new QLineEdit(centralwidget);
        lineDisplay->setObjectName("lineDisplay");
        lineDisplay->setGeometry(QRect(10, 50, 381, 51));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineDisplay->setFont(font1);
        lineDisplay->setAutoFillBackground(false);
        lineDisplay->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 10, 391, 31));
        QFont font2;
        font2.setPointSize(21);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setWordWrap(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 420, 361, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Documents/Stuff/openvpn_jorizzo/openvpn-client-portable-2.0.41/logo_v3_339.png")));
        label->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 110, 376, 234));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineMargin = new QLineEdit(widget);
        lineMargin->setObjectName("lineMargin");
        lineMargin->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineMargin, 4, 1, 1, 1);

        setButton_4 = new QPushButton(widget);
        setButton_4->setObjectName("setButton_4");

        gridLayout->addWidget(setButton_4, 3, 2, 1, 1);

        lineTaxRate = new QLineEdit(widget);
        lineTaxRate->setObjectName("lineTaxRate");
        lineTaxRate->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineTaxRate, 5, 1, 1, 1);

        lineWeightPerRoll = new QLineEdit(widget);
        lineWeightPerRoll->setObjectName("lineWeightPerRoll");
        lineWeightPerRoll->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineWeightPerRoll, 1, 1, 1, 1);

        lineFactor = new QLineEdit(widget);
        lineFactor->setObjectName("lineFactor");
        lineFactor->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineFactor, 3, 1, 1, 1);

        linePricePerRoll = new QLineEdit(widget);
        linePricePerRoll->setObjectName("linePricePerRoll");
        linePricePerRoll->setAutoFillBackground(true);
        linePricePerRoll->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        linePricePerRoll->setDragEnabled(true);

        gridLayout->addWidget(linePricePerRoll, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        setButton_3 = new QPushButton(widget);
        setButton_3->setObjectName("setButton_3");
        QFont font3;
        font3.setBold(false);
        setButton_3->setFont(font3);

        gridLayout->addWidget(setButton_3, 2, 2, 1, 1);

        setButton_7 = new QPushButton(widget);
        setButton_7->setObjectName("setButton_7");

        gridLayout->addWidget(setButton_7, 6, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineWeightPerPiece = new QLineEdit(widget);
        lineWeightPerPiece->setObjectName("lineWeightPerPiece");
        lineWeightPerPiece->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineWeightPerPiece, 2, 1, 1, 1);

        label_1 = new QLabel(widget);
        label_1->setObjectName("label_1");
        label_1->setFont(font);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        setButton_5 = new QPushButton(widget);
        setButton_5->setObjectName("setButton_5");

        gridLayout->addWidget(setButton_5, 4, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        setButton_6 = new QPushButton(widget);
        setButton_6->setObjectName("setButton_6");

        gridLayout->addWidget(setButton_6, 5, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineNumberOfPieces = new QLineEdit(widget);
        lineNumberOfPieces->setObjectName("lineNumberOfPieces");
        lineNumberOfPieces->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(lineNumberOfPieces, 6, 1, 1, 1);

        setButton_2 = new QPushButton(widget);
        setButton_2->setObjectName("setButton_2");
        setButton_2->setFont(font3);

        gridLayout->addWidget(setButton_2, 1, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        setButton_1 = new QPushButton(widget);
        setButton_1->setObjectName("setButton_1");
        setButton_1->setFont(font3);

        gridLayout->addWidget(setButton_1, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 413, 22));
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
        label_8->setText(QCoreApplication::translate("MainWindow", "3D_Print Coast Calculator", nullptr));
        label->setText(QString());
        setButton_4->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Faktor", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MwSt in %", nullptr));
        setButton_3->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        setButton_7->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Gewicht pro Werkst\303\274ck in Gramm", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Preis pro Filament Rolle in \342\202\254", nullptr));
        setButton_5->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Anzahl Werkst\303\274cke", nullptr));
        setButton_6->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gewinnzuschlag in %", nullptr));
        setButton_2->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gewicht Filament Rolle in Gramm", nullptr));
        setButton_1->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
