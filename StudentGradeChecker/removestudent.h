#ifndef REMOVESTUDENT_H
#define REMOVESTUDENT_H

#include <QDialog>

namespace Ui {
class removestudent;
}

class removestudent : public QDialog
{
    Q_OBJECT

public:
    explicit removestudent(QWidget *parent = nullptr);
    ~removestudent();

signals:
    void backButtonClicked();

private slots:
    void on_submit_btn_clicked();

    void on_remove_btn_clicked();

    void on_back_btn_clicked();

private:
    Ui::removestudent *ui;
};

#endif // REMOVESTUDENT_H
