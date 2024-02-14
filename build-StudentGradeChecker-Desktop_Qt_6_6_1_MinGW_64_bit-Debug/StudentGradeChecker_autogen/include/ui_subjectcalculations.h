/********************************************************************************
** Form generated from reading UI file 'subjectcalculations.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTCALCULATIONS_H
#define UI_SUBJECTCALCULATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SubjectCalculations
{
public:
    QLabel *subject_label;
    QComboBox *subject_dropdown;
    QLabel *main_title;
    QPushButton *pushButton;
    QPushButton *back_btn;
    QGroupBox *StudentCalculations;
    QLabel *view_mode;
    QLabel *view_median;
    QLabel *mean_label;
    QLabel *view_mean;
    QLabel *mode_label;
    QLabel *median_label;
    QLabel *no_stud_label;
    QLabel *view_no_stud;

    void setupUi(QDialog *SubjectCalculations)
    {
        if (SubjectCalculations->objectName().isEmpty())
            SubjectCalculations->setObjectName("SubjectCalculations");
        SubjectCalculations->resize(485, 391);
        subject_label = new QLabel(SubjectCalculations);
        subject_label->setObjectName("subject_label");
        subject_label->setGeometry(QRect(10, 70, 121, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        subject_label->setFont(font);
        subject_dropdown = new QComboBox(SubjectCalculations);
        subject_dropdown->setObjectName("subject_dropdown");
        subject_dropdown->setGeometry(QRect(160, 70, 181, 24));
        main_title = new QLabel(SubjectCalculations);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(80, 0, 321, 51));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setUnderline(false);
        main_title->setFont(font1);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        pushButton = new QPushButton(SubjectCalculations);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 70, 80, 24));
        pushButton->setAutoDefault(true);
        back_btn = new QPushButton(SubjectCalculations);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(150, 350, 181, 31));
        QFont font2;
        font2.setBold(true);
        back_btn->setFont(font2);
        back_btn->setAutoDefault(false);
        StudentCalculations = new QGroupBox(SubjectCalculations);
        StudentCalculations->setObjectName("StudentCalculations");
        StudentCalculations->setGeometry(QRect(40, 120, 411, 191));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        StudentCalculations->setFont(font3);
        StudentCalculations->setAlignment(Qt::AlignCenter);
        StudentCalculations->setFlat(false);
        StudentCalculations->setCheckable(false);
        view_mode = new QLabel(StudentCalculations);
        view_mode->setObjectName("view_mode");
        view_mode->setGeometry(QRect(80, 120, 121, 21));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        view_mode->setFont(font4);
        view_median = new QLabel(StudentCalculations);
        view_median->setObjectName("view_median");
        view_median->setGeometry(QRect(80, 90, 121, 21));
        view_median->setFont(font4);
        mean_label = new QLabel(StudentCalculations);
        mean_label->setObjectName("mean_label");
        mean_label->setGeometry(QRect(10, 60, 51, 21));
        mean_label->setFont(font4);
        view_mean = new QLabel(StudentCalculations);
        view_mean->setObjectName("view_mean");
        view_mean->setGeometry(QRect(80, 60, 121, 21));
        view_mean->setFont(font4);
        mode_label = new QLabel(StudentCalculations);
        mode_label->setObjectName("mode_label");
        mode_label->setGeometry(QRect(10, 120, 51, 21));
        mode_label->setFont(font4);
        median_label = new QLabel(StudentCalculations);
        median_label->setObjectName("median_label");
        median_label->setGeometry(QRect(10, 90, 91, 21));
        median_label->setFont(font4);
        no_stud_label = new QLabel(StudentCalculations);
        no_stud_label->setObjectName("no_stud_label");
        no_stud_label->setGeometry(QRect(10, 30, 151, 21));
        no_stud_label->setFont(font4);
        view_no_stud = new QLabel(StudentCalculations);
        view_no_stud->setObjectName("view_no_stud");
        view_no_stud->setGeometry(QRect(180, 30, 121, 21));
        view_no_stud->setFont(font4);

        retranslateUi(SubjectCalculations);

        QMetaObject::connectSlotsByName(SubjectCalculations);
    } // setupUi

    void retranslateUi(QDialog *SubjectCalculations)
    {
        SubjectCalculations->setWindowTitle(QCoreApplication::translate("SubjectCalculations", "Dialog", nullptr));
        subject_label->setText(QCoreApplication::translate("SubjectCalculations", "Subject Selected:", nullptr));
        main_title->setText(QCoreApplication::translate("SubjectCalculations", "Subject Analytics", nullptr));
        pushButton->setText(QCoreApplication::translate("SubjectCalculations", "Submit", nullptr));
        back_btn->setText(QCoreApplication::translate("SubjectCalculations", "Back To Main Menu", nullptr));
        StudentCalculations->setTitle(QString());
        view_mode->setText(QString());
        view_median->setText(QString());
        mean_label->setText(QCoreApplication::translate("SubjectCalculations", "Mean:", nullptr));
        view_mean->setText(QString());
        mode_label->setText(QCoreApplication::translate("SubjectCalculations", "STD:", nullptr));
        median_label->setText(QCoreApplication::translate("SubjectCalculations", "Median:", nullptr));
        no_stud_label->setText(QCoreApplication::translate("SubjectCalculations", "Number Of Students:", nullptr));
        view_no_stud->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubjectCalculations: public Ui_SubjectCalculations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTCALCULATIONS_H
