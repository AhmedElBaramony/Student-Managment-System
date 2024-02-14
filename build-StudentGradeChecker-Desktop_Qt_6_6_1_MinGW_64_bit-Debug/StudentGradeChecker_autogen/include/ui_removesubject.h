/********************************************************************************
** Form generated from reading UI file 'removesubject.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESUBJECT_H
#define UI_REMOVESUBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_removesubject
{
public:
    QLabel *subject_label;
    QLabel *main_title;
    QPushButton *remove_subject_btn;
    QComboBox *subject_dropdown;
    QPushButton *back_btn;
    QLineEdit *id_text;
    QPushButton *pushButton;
    QLabel *id_label;

    void setupUi(QDialog *removesubject)
    {
        if (removesubject->objectName().isEmpty())
            removesubject->setObjectName("removesubject");
        removesubject->resize(650, 263);
        subject_label = new QLabel(removesubject);
        subject_label->setObjectName("subject_label");
        subject_label->setGeometry(QRect(90, 120, 121, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        subject_label->setFont(font);
        main_title = new QLabel(removesubject);
        main_title->setObjectName("main_title");
        main_title->setGeometry(QRect(160, 10, 321, 51));
        QFont font1;
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setUnderline(false);
        main_title->setFont(font1);
        main_title->setAutoFillBackground(false);
        main_title->setFrameShape(QFrame::NoFrame);
        main_title->setAlignment(Qt::AlignCenter);
        main_title->setIndent(0);
        remove_subject_btn = new QPushButton(removesubject);
        remove_subject_btn->setObjectName("remove_subject_btn");
        remove_subject_btn->setGeometry(QRect(320, 190, 171, 31));
        QFont font2;
        font2.setBold(true);
        remove_subject_btn->setFont(font2);
        remove_subject_btn->setAutoDefault(false);
        subject_dropdown = new QComboBox(removesubject);
        subject_dropdown->setObjectName("subject_dropdown");
        subject_dropdown->setGeometry(QRect(240, 120, 181, 24));
        back_btn = new QPushButton(removesubject);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(130, 190, 181, 31));
        back_btn->setFont(font2);
        back_btn->setAutoDefault(false);
        id_text = new QLineEdit(removesubject);
        id_text->setObjectName("id_text");
        id_text->setGeometry(QRect(240, 80, 181, 24));
        pushButton = new QPushButton(removesubject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 80, 80, 24));
        pushButton->setAutoDefault(true);
        id_label = new QLabel(removesubject);
        id_label->setObjectName("id_label");
        id_label->setGeometry(QRect(90, 80, 81, 21));
        id_label->setFont(font);

        retranslateUi(removesubject);

        QMetaObject::connectSlotsByName(removesubject);
    } // setupUi

    void retranslateUi(QDialog *removesubject)
    {
        removesubject->setWindowTitle(QCoreApplication::translate("removesubject", "Dialog", nullptr));
        subject_label->setText(QCoreApplication::translate("removesubject", "Subject Selected:", nullptr));
        main_title->setText(QCoreApplication::translate("removesubject", "Remove Subjects", nullptr));
        remove_subject_btn->setText(QCoreApplication::translate("removesubject", "Remove Subject", nullptr));
        back_btn->setText(QCoreApplication::translate("removesubject", "Back To Main Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("removesubject", "Submit", nullptr));
        id_label->setText(QCoreApplication::translate("removesubject", "Student ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removesubject: public Ui_removesubject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESUBJECT_H
