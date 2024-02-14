#ifndef SUBJECTCALCULATIONS_H
#define SUBJECTCALCULATIONS_H

#include <QDialog>

namespace Ui {
class SubjectCalculations;
}

class SubjectCalculations : public QDialog
{
    Q_OBJECT

public:
    explicit SubjectCalculations(QWidget *parent = nullptr);
    ~SubjectCalculations();

signals:
    void backButtonClicked();

private slots:
    void on_pushButton_clicked();

    void on_back_btn_clicked();

private:
    Ui::SubjectCalculations *ui;
};

#endif // SUBJECTCALCULATIONS_H
