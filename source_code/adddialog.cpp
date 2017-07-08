#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("Add Course"));
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(onOkBtn()));
}

void AddDialog::onOkBtn()
{
    QString courseName=ui->nameEdit->text();
    QString semester=ui->semesterEdit->text();
    QString score=ui->scoreEdit->text();
    QString credit=ui->creditEdit->text();

    //Remind user of completing the table
    if(courseName.isEmpty()||semester.isEmpty()
               ||score.isEmpty()||credit.isEmpty())
    {
        QMessageBox::information(this,tr("Attention!"),tr("Please complete the table!"));
        return;
    }

    QSqlDatabase db;
    //Determine whether connection exists
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
      db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db");

    //Connect to MySql, insert data into database
    if(db.open())
    {
        QSqlQuery cursor(db);
        QString str=QString("INSERT INTO courselist VALUES(\"%1\",\"%2\",\"%3\",\"%4\")")
                .arg(courseName).arg(semester).arg(score).arg(credit);
        cursor.exec(str);
    }
    this->close();
}

AddDialog::~AddDialog()
{
    delete ui;
}
