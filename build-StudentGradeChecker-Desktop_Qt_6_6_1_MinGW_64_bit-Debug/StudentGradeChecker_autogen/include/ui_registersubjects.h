/********************************************************************************
** Form generated from reading UI file 'registersubjects.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERSUBJECTS_H
#define UI_REGISTERSUBJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RegisterSubjects
{
public:
    QLineEdit *id_text;
    QPushButton *back_btn;
    QLabel *id_label;
    QPushButton *add_subject_btn;
    QLabel *main_title;
    QComboBox *subject_dropdown;
    QLabel *subject_label;
    QPushButton *pushButton;
    QLabel *grade_label;
    QSpinBox *grade_text;

    void setupUi(QDialog *RegisterSubjects)
    {
        if (RegisterSubjects->objectName().isEmpty())
            RegisterSubjects->setObjectName("RegisterSubjects");
        RegisterSubjects->resize(637, 270);
        id_text = new QLineEdit(RegisterSubjects);
        id_text->setObjectName("id_text");
        id_text->setGeometry(QRect(240, 80, 181, 24));
        back_btn = new QPushButton(RegisterSubjects);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(130, 210, 181, 31));
        QFont font;
        font.setBold(true);
        back_btn->setFont(font);
        back_btn->setAutoDefault(false);
        id_label = new QLabel(RegisterSubjects);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(90, 80, 81, 21));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        id_label->setFont(font1);
        add_subject_btn = new QPushButton(RegisterSubjects);
        add_subject_btn->setObjectName("add_subject_btn");
        add_subject_btn->setGeometry(QRect(320, 210, 171, 31));
        add_subject_btn->setFont(font);
        add_subject_btn->setAutoDefault(false);
        main_title = new QLabel(RegisterSubjects);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(160, 10, 321, 51));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setUnderline(false);
        main_title->setFont(font2);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        subject_dropdown = new QComboBox(RegisterSubjects);
        subject_dropdown->setObjectName("subject_dropdown");
        subject_dropdown->setGeometry(QRect(240, 120, 181, 24));
        subject_label = new QLabel(RegisterSubjects);
        subject_label->setObjectName("subject_label");
        subject_label->setGeometry(QRect(90, 120, 121, 21));
        subject_label->setFont(font1);
        pushButton = new QPushButton(RegisterSubjects);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 80, 80, 24));
        pushButton->setAutoDefault(true);
        grade_label = new QLabel(RegisterSubjects);
        grade_label->setObjectName("grade_label");
        grade_label->setGeometry(QRect(90, 160, 81, 21));
        grade_label->setFont(font1);
        grade_text = new QSpinBox(RegisterSubjects);
        grade_text->setObjectName("grade_text");
        grade_text->setGeometry(QRect(240, 160, 42, 25));
        grade_text->setMaximum(100);

        retranslateUi(RegisterSubjects);

        QMetaObject::connectSlotsByName(RegisterSubjects);
    } // setupUi

    void retranslateUi(QDialog *RegisterSubjects)
    {
        RegisterSubjects->setWindowTitle(QCoreApplication::translate("RegisterSubjects", "Dialog", nullptr));
        back_btn->setText(QCoreApplication::translate("RegisterSubjects", "Back To Main Menu", nullptr));
        id_label->setText(QCoreApplication::translate("RegisterSubjects", "Student ID:", nullptr));
        add_subject_btn->setText(QCoreApplication::translate("RegisterSubjects", "Add Subjects", nullptr));
        main_title->setText(QCoreApplication::translate("RegisterSubjects", "Register Subjects", nullptr));
        subject_label->setText(QCoreApplication::translate("RegisterSubjects", "Subject Selected:", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterSubjects", "Submit", nullptr));
        grade_label->setText(QCoreApplication::translate("RegisterSubjects", "Grade:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterSubjects: public Ui_RegisterSubjects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERSUBJECTS_H
