#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
#include <QMessageBox>
#include <QDialog>
#include "classes.h"

namespace Ui {
class addstudent;
}

class addstudent : public QDialog
{
    Q_OBJECT

public:
    explicit addstudent(QWidget *parent = nullptr);
    ~addstudent();

signals:
    void backButtonClicked();

private slots:

    void on_submit_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::addstudent *ui;
};

#endif // ADDSTUDENT_H
