#include "removestudent.h"
#include "ui_removestudent.h"
#include "classes.h"
#include <QMessageBox>

removestudent::removestudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::removestudent)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    ui->name_label->hide();
    ui->array_index_label->hide();
    ui->year_label->hide();
    ui->gpa_label->hide();

    ui->view_name->hide();
    ui->view_array_index->hide();
    ui->view_year->hide();
    ui->view_gpa->hide();

    ui->remove_btn->hide();
}

removestudent::~removestudent()
{
    delete ui;
}

Student *s2;
int id2;

void removestudent::on_submit_btn_clicked()
{
    id2 = ui->id_text->text().toInt();

    if(SGC::sgc.searchStudent(id2) != -1){
        s2 = SGC::sgc.getStudent(SGC::sgc.searchStudent(id2));
        ui->name_label->show();
        ui->array_index_label->show();
        ui->year_label->show();
        ui->gpa_label->show();

        ui->view_name->show();
        ui->view_array_index->show();
        ui->view_year->show();
        ui->view_gpa->show();

        ui->remove_btn->show();

        ui->view_name->setText(QString::fromStdString(s2->getName()));
        ui->view_array_index->setText(QString::number(SGC::sgc.searchStudent(id2)));
        ui->view_year->setText(QString::number(s2->getYear()));
        ui->view_gpa->setText(QString::number(s2->CalculateGpa()));

        ui->id_text->clear();

    }
    else{
        ui->name_label->hide();
        ui->array_index_label->hide();
        ui->year_label->hide();
        ui->gpa_label->hide();

        ui->view_name->hide();
        ui->view_array_index->hide();
        ui->view_year->hide();
        ui->view_gpa->hide();

        ui->remove_btn->hide();

        QMessageBox::critical(this,"Prompt","Student doesn't exist!");
    }
}


void removestudent::on_remove_btn_clicked()
{
    SGC::sgc.removeStudent(id2);

    ui->name_label->hide();
    ui->array_index_label->hide();
    ui->year_label->hide();
    ui->gpa_label->hide();

    ui->view_name->hide();
    ui->view_array_index->hide();
    ui->view_year->hide();
    ui->view_gpa->hide();

    ui->remove_btn->hide();

    QMessageBox::information(this,"Prompt","Student has been removed successfuly!");
}


void removestudent::on_back_btn_clicked()
{
    emit backButtonClicked();

    ui->name_label->hide();
    ui->array_index_label->hide();
    ui->year_label->hide();
    ui->gpa_label->hide();

    ui->view_name->clear();
    ui->view_array_index->clear();
    ui->view_year->clear();
    ui->view_gpa->clear();

    ui->id_text->clear();
}

