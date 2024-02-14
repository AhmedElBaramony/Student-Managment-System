#include "registersubjects.h"
#include "ui_registersubjects.h"

Student *s1;

RegisterSubjects::RegisterSubjects(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterSubjects)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    ui->subject_dropdown->hide();
    ui->subject_label->hide();
    ui->grade_text->hide();
    ui->grade_label->hide();
    ui->add_subject_btn->hide();
}

RegisterSubjects::~RegisterSubjects()
{
    delete ui;
}

void RegisterSubjects::on_pushButton_clicked()
{
    ui->subject_dropdown->clear();
    int id = (ui->id_text->text()).toInt();
    int found = SGC::sgc.searchStudent(id);

    if (found != -1)
    {
        ui->subject_dropdown->show();
        ui->subject_label->show();
        ui->grade_text->show();
        ui->grade_label->show();
        ui->add_subject_btn->show();

        s1 = SGC::sgc.getStudent(SGC::sgc.searchStudent(id));

        for (int i = 0; i < subjectSize; i++)
        {
            if(s1->searchSubject(SGC::sl.getSubject(i)->getName()) == -1)
            {
                if (SGC::sl.getSubject(i)->getPrerequisite() == "None" || s1->searchSubject(SGC::sl.getSubject(i)->getPrerequisite()) != -1)
                {
                    ui->subject_dropdown->addItem(QString::fromStdString(SGC::sl.getSubject(i)->getName()));
                }
            }
        }
    }
    else
    {
        QMessageBox::information(this,"Prompt","Student Not Found!");
        ui->id_text->clear();
        ui->subject_dropdown->hide();
        ui->subject_label->hide();
        ui->grade_text->hide();
        ui->grade_label->hide();
        ui->add_subject_btn->hide();
    }
}


void RegisterSubjects::on_add_subject_btn_clicked()
{
    string selected = ui->subject_dropdown->currentText().toStdString();
    Subject* subject_selected = SGC::sl.getSubject(SGC::sl.searchSubject(selected));
    int grade = ui->grade_text->value();

    s1->addSubject(subject_selected,grade);
    on_pushButton_clicked();
}

void RegisterSubjects::on_back_btn_clicked()
{
    emit backButtonClicked();
}

