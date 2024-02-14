/********************************************************************************
** Form generated from reading UI file 'removestudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESTUDENT_H
#define UI_REMOVESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_removestudent
{
public:
    QLabel *view_name;
    QLabel *array_index_label;
    QLabel *main_title;
    QLabel *id_label;
    QLabel *view_year;
    QPushButton *submit_btn;
    QLabel *view_array_index;
    QLineEdit *id_text;
    QLabel *name_label;
    QFrame *line;
    QPushButton *back_btn;
    QLabel *year_label;
    QLabel *gpa_label;
    QLabel *view_gpa;
    QPushButton *remove_btn;

    void setupUi(QDialog *removestudent)
    {
        if (removestudent->objectName().isEmpty())
            removestudent->setObjectName("removestudent");
        removestudent->resize(430, 359);
        view_name = new QLabel(removestudent);
        view_name->setObjectName("view_name");
        view_name->setGeometry(QRect(130, 150, 231, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        view_name->setFont(font);
        array_index_label = new QLabel(removestudent);
        array_index_label->setObjectName("array_index_label");
        array_index_label->setGeometry(QRect(30, 180, 91, 21));
        array_index_label->setFont(font);
        main_title = new QLabel(removestudent);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(60, 10, 321, 51));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setUnderline(false);
        main_title->setFont(font1);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        id_label = new QLabel(removestudent);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(30, 80, 41, 21));
        id_label->setFont(font);
        view_year = new QLabel(removestudent);
        view_year->setObjectName("view_year");
        view_year->setGeometry(QRect(130, 210, 121, 21));
        view_year->setFont(font);
        submit_btn = new QPushButton(removestudent);
        submit_btn->setObjectName("submit_btn");
        submit_btn->setGeometry(QRect(270, 80, 111, 21));
        QFont font2;
        font2.setBold(true);
        submit_btn->setFont(font2);
        view_array_index = new QLabel(removestudent);
        view_array_index->setObjectName("view_array_index");
        view_array_index->setGeometry(QRect(130, 180, 101, 21));
        view_array_index->setFont(font);
        id_text = new QLineEdit(removestudent);
        id_text->setObjectName("id_text");
        id_text->setGeometry(QRect(70, 80, 181, 24));
        name_label = new QLabel(removestudent);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(30, 150, 51, 21));
        name_label->setFont(font);
        line = new QFrame(removestudent);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 120, 411, 20));
        QFont font3;
        font3.setBold(false);
        line->setFont(font3);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        back_btn = new QPushButton(removestudent);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(30, 310, 181, 31));
        back_btn->setFont(font2);
        back_btn->setAutoDefault(false);
        year_label = new QLabel(removestudent);
        year_label->setObjectName("year_label");
        year_label->setGeometry(QRect(30, 210, 51, 21));
        year_label->setFont(font);
        gpa_label = new QLabel(removestudent);
        gpa_label->setObjectName("gpa_label");
        gpa_label->setGeometry(QRect(30, 240, 51, 21));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        gpa_label->setFont(font4);
        view_gpa = new QLabel(removestudent);
        view_gpa->setObjectName("view_gpa");
        view_gpa->setGeometry(QRect(130, 240, 121, 21));
        view_gpa->setFont(font4);
        remove_btn = new QPushButton(removestudent);
        remove_btn->setObjectName("remove_btn");
        remove_btn->setGeometry(QRect(220, 310, 181, 31));
        remove_btn->setFont(font2);
        remove_btn->setAutoDefault(false);

        retranslateUi(removestudent);

        QMetaObject::connectSlotsByName(removestudent);
    } // setupUi

    void retranslateUi(QDialog *removestudent)
    {
        removestudent->setWindowTitle(QCoreApplication::translate("removestudent", "Dialog", nullptr));
        view_name->setText(QString());
        array_index_label->setText(QCoreApplication::translate("removestudent", "Array Index:", nullptr));
        main_title->setText(QCoreApplication::translate("removestudent", "Remove Student", nullptr));
        id_label->setText(QCoreApplication::translate("removestudent", "ID:", nullptr));
        view_year->setText(QString());
        submit_btn->setText(QCoreApplication::translate("removestudent", "Submit", nullptr));
        view_array_index->setText(QString());
        name_label->setText(QCoreApplication::translate("removestudent", "Name:", nullptr));
        back_btn->setText(QCoreApplication::translate("removestudent", "Back To Main Menu", nullptr));
        year_label->setText(QCoreApplication::translate("removestudent", "Year:", nullptr));
        gpa_label->setText(QCoreApplication::translate("removestudent", "GPA:", nullptr));
        view_gpa->setText(QString());
        remove_btn->setText(QCoreApplication::translate("removestudent", "Remove Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removestudent: public Ui_removestudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESTUDENT_H
