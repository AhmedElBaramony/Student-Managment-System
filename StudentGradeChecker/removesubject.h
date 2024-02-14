#ifndef REMOVESUBJECT_H
#define REMOVESUBJECT_H

#include <QDialog>

namespace Ui {
class removesubject;
}

class removesubject : public QDialog
{
    Q_OBJECT

public:
    explicit removesubject(QWidget *parent = nullptr);
    ~removesubject();

signals:
    void backButtonClicked();

private slots:
    void on_pushButton_clicked();

    void on_remove_subject_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::removesubject *ui;
};

#endif // REMOVESUBJECT_H
