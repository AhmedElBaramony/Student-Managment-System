#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    search_student_form = new SearchStudent(this);
    add_student_form = new addstudent(this);
    register_subjects_form = new RegisterSubjects(this);
    subject_calculations_form = new SubjectCalculations(this);
    remove_subject_form = new removesubject(this);
    remove_student_form = new removestudent(this);

    connect(ui->search_student, SIGNAL(clicked()), this, SLOT(on_search_student_clicked()));
    connect(search_student_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));

    connect(ui->add_student, SIGNAL(clicked()), this, SLOT(on_add_student_clicked()));
    connect(add_student_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));

    connect(ui->subject_regeisteration, SIGNAL(clicked()), this, SLOT(on_subject_regeisteration_clicked()));
    connect(register_subjects_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));

    connect(ui->subjects_calculations, SIGNAL(clicked()), this, SLOT(on_subjects_calculations_clicked()));
    connect(subject_calculations_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));

    connect(ui->subjects_calculations_2, SIGNAL(clicked()), this, SLOT(on_subjects_calculations_2_clicked()));
    connect(remove_subject_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));

    connect(ui->remove_student, SIGNAL(clicked()), this, SLOT(on_remove_student_clicked()));
    connect(remove_student_form, SIGNAL(backButtonClicked()), this, SLOT(onBackButtonClicked()));



}

MainWindow::~MainWindow()
{
    saveToFile(SGC::sgc,SGC::sl);

    delete ui;
    close();
}

void MainWindow::on_search_student_clicked()
{
    search_student_form->show();
    hide();
}

void MainWindow::onBackButtonClicked()
{
    show();
    search_student_form->hide();
    add_student_form->hide();
    register_subjects_form->hide();
    subject_calculations_form->hide();
    remove_subject_form->hide();
    remove_student_form->hide();
}

void MainWindow::on_add_student_clicked()
{
    add_student_form->show();
    hide();
}

void MainWindow::on_subject_regeisteration_clicked()
{
    register_subjects_form->show();
    hide();
}


void MainWindow::on_subjects_calculations_clicked()
{
    subject_calculations_form->show();
    hide();
}


void MainWindow::on_subjects_calculations_2_clicked()
{
    remove_subject_form->show();
    hide();
}


void MainWindow::on_remove_student_clicked()
{
    remove_student_form->show();
    hide();
}

