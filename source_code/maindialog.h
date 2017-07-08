#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include "adddialog.h"

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();
public slots:
    void onAddBtn();
    void onDeleteBtn();
    void onRefreshBtn();
    void onExitBtn();
private:
    Ui::MainDialog *ui;
    AddDialog *addDialog;
    void calculateGPA();
};

#endif // MAINDIALOG_H
