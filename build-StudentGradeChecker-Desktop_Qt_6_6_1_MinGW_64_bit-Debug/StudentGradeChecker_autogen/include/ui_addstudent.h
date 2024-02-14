/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addstudent
{
public:
    QLabel *name_label;
    QLabel *id_label;
    QPushButton *submit_btn;
    QLabel *main_title;
    QPushButton *back_btn;
    QLabel *year_label;
    QLineEdit *id_text;
    QLineEdit *name_text;
    QLineEdit *year_text;

    void setupUi(QDialog *addstudent)
    {
        if (addstudent->objectName().isEmpty())
            addstudent->setObjectName("addstudent");
        addstudent->resize(454, 262);
        name_label = new QLabel(addstudent);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(90, 90, 51, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        name_label->setFont(font);
        id_label = new QLabel(addstudent);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(90, 120, 41, 21));
        id_label->setFont(font);
        submit_btn = new QPushButton(addstudent);
        submit_btn->setObjectName("submit_btn");
        submit_btn->setGeometry(QRect(230, 210, 171, 31));
        QFont font1;
        font1.setBold(true);
        submit_btn->setFont(font1);
        main_title = new QLabel(addstudent);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(70, 10, 321, 51));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setUnderline(false);
        main_title->setFont(font2);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        back_btn = new QPushButton(addstudent);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(40, 210, 181, 31));
        back_btn->setFont(font1);
        back_btn->setAutoDefault(false);
        year_label = new QLabel(addstudent);
        year_label->setObjectName("year_label");
        year_label->setGeometry(QRect(90, 150, 51, 21));
        year_label->setFont(font);
        id_text = new QLineEdit(addstudent);
        id_text->setObjectName("id_text");
        id_text->setGeometry(QRect(150, 120, 181, 24));
        name_text = new QLineEdit(addstudent);
        name_text->setObjectName("name_text");
        name_text->setGeometry(QRect(150, 90, 181, 24));
        year_text = new QLineEdit(addstudent);
        year_text->setObjectName("year_text");
        year_text->setGeometry(QRect(150, 150, 181, 24));

        retranslateUi(addstudent);

        QMetaObject::connectSlotsByName(addstudent);
    } // setupUi

    void retranslateUi(QDialog *addstudent)
    {
        addstudent->setWindowTitle(QCoreApplication::translate("addstudent", "Dialog", nullptr));
        name_label->setText(QCoreApplication::translate("addstudent", "Name:", nullptr));
        id_label->setText(QCoreApplication::translate("addstudent", "ID:", nullptr));
        submit_btn->setText(QCoreApplication::translate("addstudent", "Submit", nullptr));
        main_title->setText(QCoreApplication::translate("addstudent", "Add Student", nullptr));
        back_btn->setText(QCoreApplication::translate("addstudent", "Back To Main Menu", nullptr));
        year_label->setText(QCoreApplication::translate("addstudent", "Year:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addstudent: public Ui_addstudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
