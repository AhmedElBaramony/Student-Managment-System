#include "removesubject.h"
#include "ui_removesubject.h"
#include "classes.h"
#include <QMessageBox>
#include <QString>

removesubject::removesubject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::removesubject)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    ui->remove_subject_btn->hide();
    ui->subject_dropdown->hide();
    ui->subject_label->hide();
}

removesubject::~removesubject()
{
    delete ui;
}

Student *s;

void removesubject::on_pushButton_clicked()
{
    ui->subject_dropdown->clear();
    int id = ui->id_text->text().toInt();

    if(SGC::sgc.searchStudent(id) != -1){
        ui->remove_subject_btn->show();
        ui->subject_dropdown->show();
        ui->subject_label->show();
        s =  SGC::sgc.getStudent(SGC::sgc.searchStudent(id));

        for(int i=0;i<subjectSize;i++){
            if(s->searchSubject(SGC::sl.getSubject(i)->getName()) != -1){
                ui->subject_dropdown->addItem(QString::fromStdString(SGC::sl.getSubject(i)->getName()));

                if(SGC::sl.getSubject(i)->getPrerequisite()!="None" && s->searchSubject(SGC::sl.getSubject(i)->getPrerequisite()) != -1){
                    ui->subject_dropdown->removeItem(ui->subject_dropdown->findText(QString::fromStdString(SGC::sl.getSubject(i)->getPrerequisite())));
                }

            }
        }

    }
    else{
        ui->remove_subject_btn->hide();
        ui->subject_dropdown->hide();
        ui->subject_label->hide();
        QMessageBox::information(this,"Prompt","Student doesn't exist!");
    }
}


void removesubject::on_remove_subject_btn_clicked()
{
    string sub = ui->subject_dropdown->currentText().toStdString();

    s->removeSubject(s->searchSubject(sub));
    on_pushButton_clicked();
}


void removesubject::on_back_btn_clicked()
{
    emit backButtonClicked();
}

