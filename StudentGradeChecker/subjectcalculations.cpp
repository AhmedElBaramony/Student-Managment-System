#include "subjectcalculations.h"
#include "ui_subjectcalculations.h"
#include "classes.h"

Subject* sub;

SubjectCalculations::SubjectCalculations(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SubjectCalculations)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    for (int i = 0; i < subjectSize; i++)
    {
        ui->subject_dropdown->addItem(QString::fromStdString(SGC::sl.getSubject(i)->getName()));
    }
}

SubjectCalculations::~SubjectCalculations()
{
    delete ui;
}

void SubjectCalculations::on_pushButton_clicked()
{

    QString subject_name = ui->subject_dropdown->currentText();

    sub = SGC::sl.getSubject(SGC::sl.searchSubject(subject_name.toStdString()));

    int mean = sub->getMean();
    int median = sub->getMedian();
    int std = sub->getStdDeviation();
    int num_stud = sub->getNumOfStudents();

    ui->view_no_stud->setText(QString::number(num_stud));

    if (mean < 0)
    {
        ui->view_mean->setText("No Mean!");
    }
    else
    {
        ui->view_mean->setText(QString::number(mean));
    }

    if (median <= 0)
    {
        ui->view_median->setText("No Median!");
    }
    else
    {
        ui->view_median->setText(QString::number(median));
    }

    if (std <= 0)
    {
        ui->view_mode->setText("No STD!");
    }
    else
    {
        ui->view_mode->setText(QString::number(std));
    }

}


void SubjectCalculations::on_back_btn_clicked()
{
    emit backButtonClicked();
    ui->view_mean->clear();
    ui->view_no_stud->clear();
    ui->view_median->clear();
    ui->view_mode->clear();
}

