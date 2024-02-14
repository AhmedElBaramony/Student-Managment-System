#include "addstudent.h"
#include "ui_addstudent.h"
#include <QChar>

addstudent::addstudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addstudent)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
}

addstudent::~addstudent()
{
    delete ui;
}

void addstudent::on_submit_btn_clicked()
{
    QString name = ui->name_text->text().replace(QString::fromStdString(" "),QString::fromStdString(""));
    QString id = ui->id_text->text();
    QString year = ui->year_text->text();

    int successful = SGC::sgc.addStudent(Student(name.toStdString(),id.toInt(),year.toInt()));

    if (successful > 0)
    {
        QMessageBox::information(this,"Prompt","Successfuly Added!");
    }
    else if (successful == -1)
    {
        QMessageBox::information(this,"Prompt","An Existing Student Has The Same ID!");
    }
    else
    {
        QMessageBox::information(this,"Prompt","Maximum Size Reached!");
    }



    ui->name_text->clear();
    ui->id_text->clear();
    ui->year_text->clear();
}


void addstudent::on_back_btn_clicked()
{
    emit backButtonClicked();
}

