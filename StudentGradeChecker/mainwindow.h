#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "searchstudent.h"
#include "addstudent.h"
#include "registersubjects.h"
#include "subjectcalculations.h"
#include "removesubject.h"
#include "removestudent.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_search_student_clicked();
    void onBackButtonClicked();

    void on_add_student_clicked();

    void on_subject_regeisteration_clicked();

    void on_subjects_calculations_clicked();

    void on_subjects_calculations_2_clicked();

    void on_remove_student_clicked();

private:
    Ui::MainWindow *ui;
    SearchStudent *search_student_form;
    addstudent *add_student_form;
    RegisterSubjects *register_subjects_form;
    SubjectCalculations *subject_calculations_form;
    removesubject *remove_subject_form;
    removestudent *remove_student_form;
};
#endif // MAINWINDOW_H
