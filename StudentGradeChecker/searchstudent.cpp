#include "searchstudent.h"
#include "ui_searchstudent.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QHBoxLayout>
#include <QPushButton>

QStandardItemModel *model = new QStandardItemModel;

SearchStudent::SearchStudent(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchStudent)
{
    ui->setupUi(this);
    connect(ui->back_btn, SIGNAL(clicked()), this, SLOT(on_back_btn_clicked()));

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    ui->tableView->hide();
    ui->StudentCalculations->hide();
}

SearchStudent::~SearchStudent()
{
    delete ui;
}

void SearchStudent::on_back_btn_clicked()
{
    emit backButtonClicked();
    ui->id_text->clear();
    ui->tableView->hide();
    ui->StudentCalculations->hide();
    ui->view_name->clear();
    ui->view_array_index->clear();
    ui->view_year->clear();
    model->clear();
}


void SearchStudent::on_back_btn_2_clicked()
{
    //SGC::sgc.addStudent(Student("Ahmed", 1, 3));
    //SGC::sgc.addStudent(Student("Omar", 72, 3));
    //SGC::sgc.addStudent(Student("Hesham", 23, 3));
    //SGC::sgc.addStudent(Student("Hamada", 283, 3));

    QString inputId = ui->id_text->text();
    int id = inputId.toInt();

    int index = SGC::sgc.searchStudent(id);

    if (index == -1)
    {
        ui->view_name->setText("Not Found");
        ui->view_array_index->setText("Not Found");
        ui->view_year->setText("Not Found");
        ui->tableView->hide();
        ui->StudentCalculations->hide();

    }
    else
    {
        ui->StudentCalculations->show();

        model->clear();

        Student* s = SGC::sgc.getStudent(index);

        ui->view_name->setText(QString::fromStdString(SGC::sgc.getStudent(index)->getName()));
        ui->view_array_index->setText(QString::number(index));
        ui->view_year->setText(QString::number(SGC::sgc.getStudent(index)->getYear()));

        ui->tableView->show();

        // Set headers for the model
        model->setHorizontalHeaderLabels(QStringList() << "Subject" << "Grade");

        // Example data (replace with your data)
        QStringList subjects;
        QStringList grades;
        Subject* sub;

        for (int i = 0; i < s->getNumOfSubjects(); i++)
        {
            sub = SGC::sl.getSubject(SGC::sl.searchSubject(s->getEnrolledSubjectName(i)));

            subjects.append(QString::fromStdString(sub->getName()));
            grades.append(QString::fromStdString(CalculateGrade(s->getSubjectGrade(i))));
        }

        // Populate the model with data
        for (int i = 0; i < subjects.size(); ++i)
        {
            QList<QStandardItem *> rowItems;
            rowItems.append(new QStandardItem(subjects.at(i)));
            rowItems.append(new QStandardItem(grades.at(i)));

            for (QStandardItem *item : rowItems)
            {
                item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            }

            model->appendRow(rowItems);
        }

        // Create a table view and set the model
        ui->tableView->setModel(model);

        int mean = s->getMean();
        int median = s->getMedian();
        int mode = s->getMode();
        float gpa = s->CalculateGpa();

        if (mean < 0)
        {
            ui->view_mean->setText("No Mean!");
        }
        else
        {
            ui->view_mean->setText(QString::number(mean));
        }

        if (median < 0)
        {
            ui->view_median->setText("No Median!");
        }
        else
        {
            ui->view_median->setText(QString::number(median));
        }

        if (gpa < 0)
        {
            ui->view_gpa->setText("No GPA!");
        }
        else
        {
            ui->view_gpa->setText(QString::number(gpa));
        }

        if (mode < 0)
        {
            ui->view_mode->setText("No Mode!");
        }
        else
        {
            ui->view_mode->setText(QString::number(mode));
        }
    }

    ui->id_text->clear();

}

