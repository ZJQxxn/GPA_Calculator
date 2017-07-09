/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QLabel *nameLabel;
    QLabel *semesterLabel;
    QLabel *scoreLabel;
    QLabel *creditLabel;
    QLineEdit *nameEdit;
    QLineEdit *semesterEdit;
    QLineEdit *scoreEdit;
    QLineEdit *creditEdit;
    QPushButton *okButton;
    QLabel *helpLabel;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QStringLiteral("AddDialog"));
        AddDialog->resize(240, 424);
        nameLabel = new QLabel(AddDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(30, 20, 81, 31));
        semesterLabel = new QLabel(AddDialog);
        semesterLabel->setObjectName(QStringLiteral("semesterLabel"));
        semesterLabel->setGeometry(QRect(30, 100, 111, 31));
        scoreLabel = new QLabel(AddDialog);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(30, 180, 91, 31));
        creditLabel = new QLabel(AddDialog);
        creditLabel->setObjectName(QStringLiteral("creditLabel"));
        creditLabel->setGeometry(QRect(30, 290, 101, 31));
        nameEdit = new QLineEdit(AddDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(30, 50, 190, 30));
        semesterEdit = new QLineEdit(AddDialog);
        semesterEdit->setObjectName(QStringLiteral("semesterEdit"));
        semesterEdit->setGeometry(QRect(30, 130, 190, 30));
        scoreEdit = new QLineEdit(AddDialog);
        scoreEdit->setObjectName(QStringLiteral("scoreEdit"));
        scoreEdit->setGeometry(QRect(30, 240, 190, 30));
        creditEdit = new QLineEdit(AddDialog);
        creditEdit->setObjectName(QStringLiteral("creditEdit"));
        creditEdit->setGeometry(QRect(30, 330, 190, 30));
        okButton = new QPushButton(AddDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(30, 380, 190, 35));
        helpLabel = new QLabel(AddDialog);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));
        helpLabel->setGeometry(QRect(20, 210, 211, 20));

        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QApplication::translate("AddDialog", "Dialog", 0));
        nameLabel->setText(QApplication::translate("AddDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Name:</span></p></body></html>", 0));
        semesterLabel->setText(QApplication::translate("AddDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Semester:</span></p><p><br/></p></body></html>", 0));
        scoreLabel->setText(QApplication::translate("AddDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Score:</span></p></body></html>", 0));
        creditLabel->setText(QApplication::translate("AddDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Credit:</span></p></body></html>", 0));
        okButton->setText(QApplication::translate("AddDialog", "OK", 0));
        helpLabel->setText(QApplication::translate("AddDialog", "<html><head/><body><p>(\344\274\230:95 \350\211\257:85 \344\270\255:75 \345\217\212\346\240\274:65)</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
