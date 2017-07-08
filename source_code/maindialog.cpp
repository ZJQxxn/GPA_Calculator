#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    //Init UI
    ui->setupUi(this);
    setWindowTitle(tr("GPA Calculator"));

    //connect signals to slots
    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(onAddBtn()));
    connect(ui->deleteButton,SIGNAL(clicked()),this,SLOT(onDeleteBtn()));
    connect(ui->refreshButton,SIGNAL(clicked()),this,SLOT(onRefreshBtn()));
    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(onExitBtn()));

    //Init TableWidget Column
    ui->reportWidget->setColumnCount(4);
    QStringList tableHead;
    tableHead<<"Name"<<"Semester"<<"Score"<<"Credit";
    ui->reportWidget->setHorizontalHeaderLabels(tableHead);

    //Connect to MySql, read data from database
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db");
    if(db.open())
    {
        QSqlQuery cursor;
        QString courseName;
        QString semester;
        QString score;
        QString credit;

        //Get the number of rows in database
        cursor.exec("SELECT COUNT(*) FROM courselist");
        cursor.next();
        int totalRow=cursor.value(0).toInt();
        ui->reportWidget->setRowCount(totalRow);
        //Read course list from database
        int rowCount;
        rowCount=0;
        cursor.exec("SELECT * FROM courselist");
        while(cursor.next())
        {
           courseName=cursor.value(0).toString();
           semester=cursor.value(1).toString();
           score=cursor.value(2).toString();
           credit=cursor.value(3).toString();
           ui->reportWidget->setItem(rowCount,0,new QTableWidgetItem(courseName));
           ui->reportWidget->setItem(rowCount,1,new QTableWidgetItem(semester));
           ui->reportWidget->setItem(rowCount,2,new QTableWidgetItem(score));
           ui->reportWidget->setItem(rowCount,3,new QTableWidgetItem(credit));
           rowCount++;
        }
    }
    calculateGPA();
}

void MainDialog::onAddBtn()
{
    addDialog=new AddDialog;
    addDialog->show();
}

void MainDialog::onDeleteBtn()
{
    QTableWidgetItem *item=ui->reportWidget->currentItem();
    int column=ui->reportWidget->currentColumn();
    if(column!=0||!item->isSelected())
    {
        QMessageBox::information(this,tr("Attention!"),tr("Please select name of which you want to delete."));
        return;
    }
    QString courseName=item->text();

    QSqlDatabase db;
    //Determine whether connection exists
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
      db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db");

    //Connect to MySql, delete a row of database
    if(db.open())
    {
        QSqlQuery cursor(db);
        QString str=QString("DELETE FROM courselist WHERE name=\"%1\"").arg(courseName);
        cursor.exec(str);
    }
}

void MainDialog::onRefreshBtn()
{
    QSqlDatabase db;
    //Determine whether connection exists
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
      db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db");

    //Connect to MySql, read data from database
    if(db.open())
    {
        QSqlQuery cursor(db);
        QString courseName;
        QString semester;
        QString score;
        QString credit;

        //Get the number of rows in database
        cursor.exec("SELECT COUNT(*) FROM courselist");
        cursor.next();
        int totalRow=cursor.value(0).toInt();
        ui->reportWidget->setRowCount(totalRow);

        //Read data from database
        int rowCount;
        rowCount=0;
        cursor.exec("SELECT * FROM courselist");
        while(cursor.next())
        {
           courseName=cursor.value(0).toString();
           semester=cursor.value(1).toString();
           score=cursor.value(2).toString();
           credit=cursor.value(3).toString();
           ui->reportWidget->setItem(rowCount,0,new QTableWidgetItem(courseName));
           ui->reportWidget->setItem(rowCount,1,new QTableWidgetItem(semester));
           ui->reportWidget->setItem(rowCount,2,new QTableWidgetItem(score));
           ui->reportWidget->setItem(rowCount,3,new QTableWidgetItem(credit));
           rowCount++;
        }
    }
    calculateGPA();
}

void MainDialog::onExitBtn()
{
    this->close();
}

void MainDialog::calculateGPA()
{
    QSqlDatabase db;
    //Determine whether connection exists
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
      db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db");

    //Get data from database
    if(db.open())
    {
        QSqlQuery cursor(db);
        float score;
        float credit;
        float total;
        float GPA;
        //Read course list from database
        cursor.exec("SELECT * FROM courselist");
        while(cursor.next())
        {
           float flag=0;
           score=cursor.value(2).toFloat();
           if (score < 60)
           {
               flag = 0;
           }
           else if(score >= 60 && score <= 62)
           {
               flag = 1;
           }
           else if(score >= 63 && score <= 65)
           {
               flag = 1.5;
           }
           else if(score >= 66 && score <= 69)
           {
               flag = 1.8;
           }
           else if(score >= 70 && score <= 72)
           {
               flag = 2;
           }
           else if(score >= 73 && score <= 75)
           {
               flag = 2.5;
           }
           else if(score >= 76 && score <= 79)
           {
               flag = 2.8;
           }
           else if(score >= 80 && score <= 82)
           {
               flag = 3;
           }
           else if(score >= 83 && score <= 85)
           {
               flag = 3.5;
           }
           else if(score >= 86 && score <= 89)
           {
               flag = 3.8;
           }
           else if(score >= 90 && score <= 92)
           {
               flag = 4;
           }
           else if(score >= 93 && score <= 95)
           {
               flag = 4.5;
           }
           else if(score >= 96 && score <= 100)
           {
               flag = 4.8;
           }
           credit+=cursor.value(3).toFloat();
           total+=flag*cursor.value(3).toFloat();
        }
        GPA=total/(credit*1.0);
        ui->GPAEdit->setText(QString("%1").arg(GPA));
    }
}

MainDialog::~MainDialog()
{
    delete ui;
}
