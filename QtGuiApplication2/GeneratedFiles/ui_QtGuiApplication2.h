/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION2_H
#define UI_QTGUIAPPLICATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication2Class
{
public:
    QAction *actionOpen_Data_Set;
    QWidget *centralWidget;
    QGroupBox *grp_box_axial;
    QScrollArea *scroll_axial;
    QWidget *scrollAreaWidgetContents;
    QVTKWidget *widget_axial;
    QGroupBox *grp_box_sagittal;
    QScrollArea *scroll_sagittal;
    QWidget *scrollAreaWidgetContents_5;
    QVTKWidget *widget_sagital;
    QGroupBox *grp_box_coronal;
    QScrollArea *scroll_coronal;
    QWidget *scrollAreaWidgetContents_6;
    QVTKWidget *widget_coronal;
    QGroupBox *grp_box_volume;
    QScrollArea *scroll_volume;
    QWidget *scrollAreaWidgetContents_7;
    QVTKWidget *widget_volume;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication2Class)
    {
        if (QtGuiApplication2Class->objectName().isEmpty())
            QtGuiApplication2Class->setObjectName(QStringLiteral("QtGuiApplication2Class"));
        QtGuiApplication2Class->resize(1208, 875);
       
        centralWidget = new QWidget(QtGuiApplication2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
		actionOpen_Data_Set = new QAction(QtGuiApplication2Class);
		actionOpen_Data_Set->setObjectName(QStringLiteral("actionOpen_Data_Set"));

        grp_box_axial = new QGroupBox(centralWidget);
        grp_box_axial->setObjectName(QStringLiteral("grp_box_axial"));
        grp_box_axial->setGeometry(QRect(70, 10, 401, 371));
        scroll_axial = new QScrollArea(grp_box_axial);
        scroll_axial->setObjectName(QStringLiteral("scroll_axial"));
        scroll_axial->setGeometry(QRect(10, 30, 391, 341));
        scroll_axial->setAcceptDrops(false);
        scroll_axial->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll_axial->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 372, 339));
        widget_axial = new QVTKWidget(scrollAreaWidgetContents);
        widget_axial->setObjectName(QStringLiteral("widget_axial"));
        widget_axial->setGeometry(QRect(0, 0, 371, 341));
        scroll_axial->setWidget(scrollAreaWidgetContents);
        grp_box_sagittal = new QGroupBox(centralWidget);
        grp_box_sagittal->setObjectName(QStringLiteral("grp_box_sagittal"));
        grp_box_sagittal->setGeometry(QRect(470, 10, 401, 371));
        scroll_sagittal = new QScrollArea(grp_box_sagittal);
        scroll_sagittal->setObjectName(QStringLiteral("scroll_sagittal"));
        scroll_sagittal->setGeometry(QRect(10, 30, 391, 341));
        scroll_sagittal->setAcceptDrops(false);
        scroll_sagittal->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll_sagittal->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 372, 339));
        widget_sagital = new QVTKWidget(scrollAreaWidgetContents_5);
        widget_sagital->setObjectName(QStringLiteral("widget_sagital"));
        widget_sagital->setGeometry(QRect(0, 0, 371, 341));
        scroll_sagittal->setWidget(scrollAreaWidgetContents_5);
        grp_box_coronal = new QGroupBox(centralWidget);
        grp_box_coronal->setObjectName(QStringLiteral("grp_box_coronal"));
        grp_box_coronal->setGeometry(QRect(70, 380, 401, 371));
        scroll_coronal = new QScrollArea(grp_box_coronal);
        scroll_coronal->setObjectName(QStringLiteral("scroll_coronal"));
        scroll_coronal->setGeometry(QRect(10, 30, 391, 341));
        scroll_coronal->setAcceptDrops(false);
        scroll_coronal->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll_coronal->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 372, 339));
        widget_coronal = new QVTKWidget(scrollAreaWidgetContents_6);
        widget_coronal->setObjectName(QStringLiteral("widget_coronal"));
        widget_coronal->setGeometry(QRect(0, 0, 371, 341));
        scroll_coronal->setWidget(scrollAreaWidgetContents_6);
        grp_box_volume = new QGroupBox(centralWidget);
        grp_box_volume->setObjectName(QStringLiteral("grp_box_volume"));
        grp_box_volume->setGeometry(QRect(470, 380, 401, 371));
        scroll_volume = new QScrollArea(grp_box_volume);
        scroll_volume->setObjectName(QStringLiteral("scroll_volume"));
        scroll_volume->setGeometry(QRect(10, 30, 391, 341));
        scroll_volume->setAcceptDrops(false);
        scroll_volume->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll_volume->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 372, 339));
        widget_volume = new QVTKWidget(scrollAreaWidgetContents_7);
        widget_volume->setObjectName(QStringLiteral("widget_volume"));
        widget_volume->setGeometry(QRect(0, 0, 371, 341));
        scroll_volume->setWidget(scrollAreaWidgetContents_7);
        QtGuiApplication2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1208, 21));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        QtGuiApplication2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication2Class->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_Data_Set);

        retranslateUi(QtGuiApplication2Class);

        QMetaObject::connectSlotsByName(QtGuiApplication2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication2Class)
    {
        QtGuiApplication2Class->setWindowTitle(QApplication::translate("QtGuiApplication2Class", "QtGuiApplication2", Q_NULLPTR));
        actionOpen_Data_Set->setText(QApplication::translate("QtGuiApplication2Class", "Open", Q_NULLPTR));
        grp_box_axial->setTitle(QApplication::translate("QtGuiApplication2Class", "Axial", Q_NULLPTR));
        grp_box_sagittal->setTitle(QApplication::translate("QtGuiApplication2Class", "Sagittal", Q_NULLPTR));
        grp_box_coronal->setTitle(QApplication::translate("QtGuiApplication2Class", "Coronal", Q_NULLPTR));
        grp_box_volume->setTitle(QApplication::translate("QtGuiApplication2Class", "Volume", Q_NULLPTR));
        menuOpen->setTitle(QApplication::translate("QtGuiApplication2Class", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication2Class: public Ui_QtGuiApplication2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION2_H
