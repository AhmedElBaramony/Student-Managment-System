#ifndef SEARCHSTUDENT_H
#define SEARCHSTUDENT_H

#include <QDialog>
#include "classes.h"

namespace Ui {
class SearchStudent;
}

class SearchStudent : public QDialog
{
    Q_OBJECT

public:
    explicit SearchStudent(QWidget *parent = nullptr);
    ~SearchStudent();

signals:
    void backButtonClicked();

private slots:
    void on_back_btn_clicked();
    void on_back_btn_2_clicked();

private:
    Ui::SearchStudent *ui;
};

#endif // SEARCHSTUDENT_H
