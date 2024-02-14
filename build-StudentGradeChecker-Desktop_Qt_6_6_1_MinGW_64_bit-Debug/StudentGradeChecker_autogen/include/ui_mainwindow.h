/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
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
    QLabel *main_title;
    QPushButton *search_student;
    QPushButton *add_student;
    QPushButton *subject_regeisteration;
    QPushButton *subjects_calculations;
    QPushButton *subjects_calculations_2;
    QFrame *line;
    QLabel *student_services_title;
    QLabel *subject_services_title;
    QPushButton *remove_student;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(711, 440);
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        main_title = new QLabel(centralwidget);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(190, 10, 321, 51));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setUnderline(false);
        main_title->setFont(font1);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        search_student = new QPushButton(centralwidget);
        search_student->setObjectName("search_student");
        search_student->setGeometry(QRect(130, 170, 131, 41));
        add_student = new QPushButton(centralwidget);
        add_student->setObjectName("add_student");
        add_student->setGeometry(QRect(130, 220, 131, 41));
        subject_regeisteration = new QPushButton(centralwidget);
        subject_regeisteration->setObjectName("subject_regeisteration");
        subject_regeisteration->setGeometry(QRect(420, 220, 131, 41));
        subjects_calculations = new QPushButton(centralwidget);
        subjects_calculations->setObjectName("subjects_calculations");
        subjects_calculations->setGeometry(QRect(420, 170, 131, 41));
        subjects_calculations_2 = new QPushButton(centralwidget);
        subjects_calculations_2->setObjectName("subjects_calculations_2");
        subjects_calculations_2->setGeometry(QRect(420, 270, 131, 41));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(340, 100, 20, 301));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        student_services_title = new QLabel(centralwidget);
        student_services_title->setObjectName("student_services_title");
        student_services_title->setGeometry(QRect(90, 100, 221, 51));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(false);
        font2.setUnderline(false);
        student_services_title->setFont(font2);
        student_services_title->setAutoFillBackground(false);
        student_services_title->setFrameShape(QFrame::NoFrame);
        student_services_title->setAlignment(Qt::AlignCenter);
        student_services_title->setIndent(0);
        subject_services_title = new QLabel(centralwidget);
        subject_services_title->setObjectName("subject_services_title");
        subject_services_title->setGeometry(QRect(380, 100, 221, 51));
        QFont font3;
        font3.setPointSize(19);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        subject_services_title->setFont(font3);
        subject_services_title->setAutoFillBackground(false);
        subject_services_title->setFrameShape(QFrame::NoFrame);
        subject_services_title->setAlignment(Qt::AlignCenter);
        subject_services_title->setIndent(0);
        remove_student = new QPushButton(centralwidget);
        remove_student->setObjectName("remove_student");
        remove_student->setGeometry(QRect(130, 270, 131, 41));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 711, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        main_title->setText(QCoreApplication::translate("MainWindow", "Student Grade Checker", nullptr));
        search_student->setText(QCoreApplication::translate("MainWindow", "Search Student", nullptr));
        add_student->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        subject_regeisteration->setText(QCoreApplication::translate("MainWindow", "Subject Registration", nullptr));
        subjects_calculations->setText(QCoreApplication::translate("MainWindow", "Subjects Calculation", nullptr));
        subjects_calculations_2->setText(QCoreApplication::translate("MainWindow", "Remove Subject", nullptr));
        student_services_title->setText(QCoreApplication::translate("MainWindow", "Student Services", nullptr));
        subject_services_title->setText(QCoreApplication::translate("MainWindow", "Subject Services", nullptr));
        remove_student->setText(QCoreApplication::translate("MainWindow", "Remove Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
