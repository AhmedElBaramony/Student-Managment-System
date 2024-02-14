/********************************************************************************
** Form generated from reading UI file 'searchstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSTUDENT_H
#define UI_SEARCHSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SearchStudent
{
public:
    QLabel *main_title;
    QLineEdit *id_text;
    QLabel *id_label;
    QFrame *line;
    QLabel *name_label;
    QLabel *array_index_label;
    QLabel *year_label;
    QLabel *view_name;
    QLabel *view_array_index;
    QLabel *view_year;
    QPushButton *back_btn;
    QPushButton *back_btn_2;
    QTableView *tableView;
    QGroupBox *StudentCalculations;
    QLabel *view_mode;
    QLabel *view_median;
    QLabel *mean_label;
    QLabel *view_mean;
    QLabel *mode_label;
    QLabel *median_label;
    QLabel *gpa_label;
    QLabel *view_gpa;

    void setupUi(QDialog *SearchStudent)
    {
        if (SearchStudent->objectName().isEmpty())
            SearchStudent->setObjectName("SearchStudent");
        SearchStudent->resize(528, 515);
        main_title = new QLabel(SearchStudent);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(110, 10, 321, 51));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setUnderline(false);
        main_title->setFont(font);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        id_text = new QLineEdit(SearchStudent);
        id_text->setObjectName("id_text");
        id_text->setGeometry(QRect(120, 80, 181, 24));
        id_label = new QLabel(SearchStudent);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(80, 80, 41, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        id_label->setFont(font1);
        line = new QFrame(SearchStudent);
        line->setObjectName("line");
        line->setGeometry(QRect(60, 120, 411, 20));
        QFont font2;
        font2.setBold(false);
        line->setFont(font2);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        name_label = new QLabel(SearchStudent);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(80, 150, 51, 21));
        name_label->setFont(font1);
        array_index_label = new QLabel(SearchStudent);
        array_index_label->setObjectName("array_index_label");
        array_index_label->setGeometry(QRect(80, 180, 91, 21));
        array_index_label->setFont(font1);
        year_label = new QLabel(SearchStudent);
        year_label->setObjectName("year_label");
        year_label->setGeometry(QRect(80, 210, 51, 21));
        year_label->setFont(font1);
        view_name = new QLabel(SearchStudent);
        view_name->setObjectName("view_name");
        view_name->setGeometry(QRect(180, 150, 231, 21));
        view_name->setFont(font1);
        view_array_index = new QLabel(SearchStudent);
        view_array_index->setObjectName("view_array_index");
        view_array_index->setGeometry(QRect(180, 180, 101, 21));
        view_array_index->setFont(font1);
        view_year = new QLabel(SearchStudent);
        view_year->setObjectName("view_year");
        view_year->setGeometry(QRect(180, 210, 121, 21));
        view_year->setFont(font1);
        back_btn = new QPushButton(SearchStudent);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(190, 480, 181, 31));
        QFont font3;
        font3.setBold(true);
        back_btn->setFont(font3);
        back_btn->setAutoDefault(false);
        back_btn_2 = new QPushButton(SearchStudent);
        back_btn_2->setObjectName("back_btn_2");
        back_btn_2->setGeometry(QRect(320, 80, 111, 21));
        back_btn_2->setFont(font3);
        tableView = new QTableView(SearchStudent);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 260, 256, 192));
        tableView->setLineWidth(15);
        tableView->setAlternatingRowColors(false);
        StudentCalculations = new QGroupBox(SearchStudent);
        StudentCalculations->setObjectName("StudentCalculations");
        StudentCalculations->setGeometry(QRect(290, 240, 211, 211));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        StudentCalculations->setFont(font4);
        StudentCalculations->setAlignment(Qt::AlignCenter);
        StudentCalculations->setFlat(false);
        StudentCalculations->setCheckable(false);
        view_mode = new QLabel(StudentCalculations);
        view_mode->setObjectName("view_mode");
        view_mode->setGeometry(QRect(80, 100, 121, 21));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        view_mode->setFont(font5);
        view_median = new QLabel(StudentCalculations);
        view_median->setObjectName("view_median");
        view_median->setGeometry(QRect(80, 70, 121, 21));
        view_median->setFont(font5);
        mean_label = new QLabel(StudentCalculations);
        mean_label->setObjectName("mean_label");
        mean_label->setGeometry(QRect(10, 40, 51, 21));
        mean_label->setFont(font5);
        view_mean = new QLabel(StudentCalculations);
        view_mean->setObjectName("view_mean");
        view_mean->setGeometry(QRect(80, 40, 121, 21));
        view_mean->setFont(font5);
        mode_label = new QLabel(StudentCalculations);
        mode_label->setObjectName("mode_label");
        mode_label->setGeometry(QRect(10, 100, 51, 21));
        mode_label->setFont(font5);
        median_label = new QLabel(StudentCalculations);
        median_label->setObjectName("median_label");
        median_label->setGeometry(QRect(10, 70, 91, 21));
        median_label->setFont(font5);
        gpa_label = new QLabel(StudentCalculations);
        gpa_label->setObjectName("gpa_label");
        gpa_label->setGeometry(QRect(10, 130, 51, 21));
        gpa_label->setFont(font5);
        view_gpa = new QLabel(StudentCalculations);
        view_gpa->setObjectName("view_gpa");
        view_gpa->setGeometry(QRect(80, 130, 121, 21));
        view_gpa->setFont(font5);

        retranslateUi(SearchStudent);

        QMetaObject::connectSlotsByName(SearchStudent);
    } // setupUi

    void retranslateUi(QDialog *SearchStudent)
    {
        SearchStudent->setWindowTitle(QCoreApplication::translate("SearchStudent", "Dialog", nullptr));
        main_title->setText(QCoreApplication::translate("SearchStudent", "Search Student", nullptr));
        id_label->setText(QCoreApplication::translate("SearchStudent", "ID:", nullptr));
        name_label->setText(QCoreApplication::translate("SearchStudent", "Name:", nullptr));
        array_index_label->setText(QCoreApplication::translate("SearchStudent", "Array Index:", nullptr));
        year_label->setText(QCoreApplication::translate("SearchStudent", "Year:", nullptr));
        view_name->setText(QString());
        view_array_index->setText(QString());
        view_year->setText(QString());
        back_btn->setText(QCoreApplication::translate("SearchStudent", "Back To Main Menu", nullptr));
        back_btn_2->setText(QCoreApplication::translate("SearchStudent", "Submit", nullptr));
        StudentCalculations->setTitle(QCoreApplication::translate("SearchStudent", "Student Grade Calculations", nullptr));
        view_mode->setText(QString());
        view_median->setText(QString());
        mean_label->setText(QCoreApplication::translate("SearchStudent", "Mean:", nullptr));
        view_mean->setText(QString());
        mode_label->setText(QCoreApplication::translate("SearchStudent", "Mode:", nullptr));
        median_label->setText(QCoreApplication::translate("SearchStudent", "Median:", nullptr));
        gpa_label->setText(QCoreApplication::translate("SearchStudent", "GPA:", nullptr));
        view_gpa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchStudent: public Ui_SearchStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSTUDENT_H
