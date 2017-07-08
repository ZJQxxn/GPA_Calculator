#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();
public slots:
    void onOkBtn();
private:
    Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
