/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QTableWidget *reportWidget;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *idLabel;
    QLineEdit *idEdit;
    QLabel *GPALabel;
    QLineEdit *GPAEdit;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *refreshButton;
    QPushButton *exitButton;
    QFrame *horizon_line;
    QFrame *vertical_line;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(730, 537);
        reportWidget = new QTableWidget(MainDialog);
        reportWidget->setObjectName(QStringLiteral("reportWidget"));
        reportWidget->setEnabled(true);
        reportWidget->setGeometry(QRect(10, 20, 511, 491));
        reportWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        reportWidget->setDragDropOverwriteMode(false);
        reportWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        reportWidget->horizontalHeader()->setDefaultSectionSize(126);
        reportWidget->verticalHeader()->setVisible(true);
        nameLabel = new QLabel(MainDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(560, 30, 72, 31));
        nameEdit = new QLineEdit(MainDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setEnabled(false);
        nameEdit->setGeometry(QRect(560, 60, 140, 25));
        idLabel = new QLabel(MainDialog);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(560, 110, 72, 31));
        idEdit = new QLineEdit(MainDialog);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setEnabled(false);
        idEdit->setGeometry(QRect(560, 140, 140, 25));
        GPALabel = new QLabel(MainDialog);
        GPALabel->setObjectName(QStringLiteral("GPALabel"));
        GPALabel->setGeometry(QRect(560, 200, 72, 21));
        GPAEdit = new QLineEdit(MainDialog);
        GPAEdit->setObjectName(QStringLiteral("GPAEdit"));
        GPAEdit->setEnabled(false);
        GPAEdit->setGeometry(QRect(560, 230, 140, 25));
        addButton = new QPushButton(MainDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(560, 320, 150, 30));
        deleteButton = new QPushButton(MainDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(560, 379, 150, 30));
        refreshButton = new QPushButton(MainDialog);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(560, 432, 150, 30));
        exitButton = new QPushButton(MainDialog);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(560, 480, 150, 30));
        horizon_line = new QFrame(MainDialog);
        horizon_line->setObjectName(QStringLiteral("horizon_line"));
        horizon_line->setGeometry(QRect(540, 280, 191, 20));
        horizon_line->setFrameShape(QFrame::HLine);
        horizon_line->setFrameShadow(QFrame::Sunken);
        vertical_line = new QFrame(MainDialog);
        vertical_line->setObjectName(QStringLiteral("vertical_line"));
        vertical_line->setGeometry(QRect(530, 0, 20, 541));
        vertical_line->setFrameShape(QFrame::VLine);
        vertical_line->setFrameShadow(QFrame::Sunken);

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", 0));
        nameLabel->setText(QApplication::translate("MainDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Name:</span></p></body></html>", 0));
        nameEdit->setText(QApplication::translate("MainDialog", "Zhang Jiaqi", 0));
        idLabel->setText(QApplication::translate("MainDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">ID:</span></p></body></html>", 0));
        idEdit->setText(QApplication::translate("MainDialog", "71116140", 0));
        GPALabel->setText(QApplication::translate("MainDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">GPA:</span></p></body></html>", 0));
        addButton->setText(QApplication::translate("MainDialog", "Add Course", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MainDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">Delete Course</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("MainDialog", "Delete Course", 0));
        refreshButton->setText(QApplication::translate("MainDialog", "Refresh", 0));
        exitButton->setText(QApplication::translate("MainDialog", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
