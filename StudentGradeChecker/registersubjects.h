#ifndef REGISTERSUBJECTS_H
#define REGISTERSUBJECTS_H

#include <QDialog>
#include "classes.h"
#include <QMessageBox>

namespace Ui {
class RegisterSubjects;
}

class RegisterSubjects : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterSubjects(QWidget *parent = nullptr);
    ~RegisterSubjects();

signals:
    void backButtonClicked();

private slots:
    void on_pushButton_clicked();

    void on_add_subject_btn_clicked();
    void on_back_btn_clicked();

private:
    Ui::RegisterSubjects *ui;
};

#endif // REGISTERSUBJECTS_H
