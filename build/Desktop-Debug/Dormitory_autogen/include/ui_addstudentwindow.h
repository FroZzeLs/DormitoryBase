/********************************************************************************
** Form generated from reading UI file 'addstudentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTWINDOW_H
#define UI_ADDSTUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QLabel *header;
    QGroupBox *groupBox;
    QLineEdit *surnameEdit;
    QLineEdit *nameEdit;
    QLineEdit *patronymEdit;
    QPushButton *addButton;
    QLineEdit *phoneNumberEdit;
    QLineEdit *ageEdit;
    QLineEdit *blockEdit;
    QLineEdit *optEdit;
    QComboBox *activityType;

    void setupUi(QDialog *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName("AddStudent");
        AddStudent->resize(312, 570);
        AddStudent->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        header = new QLabel(AddStudent);
        header->setObjectName("header");
        header->setGeometry(QRect(30, 0, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        header->setFont(font);
        groupBox = new QGroupBox(AddStudent);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 271, 501));
        groupBox->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #007BFF; /* \320\241\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\276\320\272\320\275\320\260 */\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\276\320\272\320\275\320\260 */\n"
"}"));
        surnameEdit = new QLineEdit(groupBox);
        surnameEdit->setObjectName("surnameEdit");
        surnameEdit->setGeometry(QRect(30, 30, 211, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        surnameEdit->setFont(font1);
        surnameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        nameEdit = new QLineEdit(groupBox);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(30, 80, 211, 51));
        nameEdit->setFont(font1);
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        patronymEdit = new QLineEdit(groupBox);
        patronymEdit->setObjectName("patronymEdit");
        patronymEdit->setGeometry(QRect(30, 130, 211, 51));
        patronymEdit->setFont(font1);
        patronymEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(70, 420, 131, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setBold(true);
        addButton->setFont(font2);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0056b3; /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: none; /* \320\243\320\261\320\270\321\200\320\260\320\265\320\274 \321\200\320\260\320\274\320\272\320\270 */\n"
"    border-radius: 8px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 \320\272\320\275\320\276\320\277"
                        "\320\272\320\270 */\n"
"    font-weight: bold; /* \320\226\320\270\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    margin-top: 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\262\320\265\321\200\321\205\321\203 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #004085; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003366; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        phoneNumberEdit = new QLineEdit(groupBox);
        phoneNumberEdit->setObjectName("phoneNumberEdit");
        phoneNumberEdit->setGeometry(QRect(30, 180, 211, 51));
        phoneNumberEdit->setFont(font1);
        phoneNumberEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        ageEdit = new QLineEdit(groupBox);
        ageEdit->setObjectName("ageEdit");
        ageEdit->setGeometry(QRect(30, 230, 211, 51));
        ageEdit->setFont(font1);
        ageEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        blockEdit = new QLineEdit(groupBox);
        blockEdit->setObjectName("blockEdit");
        blockEdit->setGeometry(QRect(30, 280, 211, 51));
        blockEdit->setFont(font1);
        blockEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        optEdit = new QLineEdit(groupBox);
        optEdit->setObjectName("optEdit");
        optEdit->setGeometry(QRect(30, 385, 211, 51));
        optEdit->setFont(font1);
        optEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\277\320\276\320\273\320\265\320\271 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\277\320\276\320\273\321\217 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    margin: 5px 0; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\274\320\265\320\266\320\264\321\203 \320\277\320\276\320\273\321\217\320\274\320\270 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  "
                        "  border-color: #007BFF; /* \320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        activityType = new QComboBox(groupBox);
        activityType->setObjectName("activityType");
        activityType->setGeometry(QRect(30, 335, 211, 42));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic UI Semilight")});
        activityType->setFont(font3);
        activityType->setCursor(QCursor(Qt::PointingHandCursor));
        activityType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 ComboBox */\n"
"    border: 2px solid #0056b3; /* \320\241\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 6px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 10px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 ComboBox */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    color: #000000; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding-right: 30px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\201\320\277\321\200\320\260\320\262\320\260 \320\264\320\273\321\217 \321\201\321\202\321\200\320\265\320\273\320\272"
                        "\320\270 */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    /*image: url(\"C:\\\\Users\\\\\320\241\320\265\321\200\320\263\320\265\320\271\\\\source\\\\repos\\\\CloneDormitory\\\\CloneDormitory\\\\CloneDormitory\\\\down-arrow.png\");  \320\227\320\260\320\274\320\265\320\275\320\270\321\202\320\265 \320\275\320\260 \320\262\320\260\321\210 \320\277\321\203\321\202\321\214 \320\272 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\216 \321\201\321\202\321\200\320\265\320\273\320\272\320\270 */\n"
"    width: 10px; /* \320\250\320\270\321\200\320\270\320\275\320\260 \321\201\321\202\321\200\320\265\320\273\320\272\320\270 */\n"
"    height: 10px; /* \320\222\321\213\321\201\320\276\321\202\320\260 \321\201\321\202\321\200\320\265\320\273\320\272\320\270 */\n"
"}\n"
"\n"
"QComboBox::item {\n"
"    background-color: #FFFFFF; /* \320\244\320\276\320\275 \320\264\320\273\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\262\321\213\320\277\320\260"
                        "\320\264\320\260\321\216\321\211\320\265\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260 */\n"
"    color: #000000; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #007BFF; /* \320\244\320\276\320\275 \320\264\320\273\321\217 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 */\n"
"    color: #FFFFFF; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\264\320\273\321\217 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 */\n"
"}"));
        activityType->setEditable(false);

        retranslateUi(AddStudent);

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QDialog *AddStudent)
    {
        AddStudent->setWindowTitle(QCoreApplication::translate("AddStudent", "Dialog", nullptr));
        header->setText(QCoreApplication::translate("AddStudent", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        groupBox->setTitle(QString());
        surnameEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        nameEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\230\320\274\321\217", nullptr));
        patronymEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        addButton->setText(QCoreApplication::translate("AddStudent", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        phoneNumberEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        ageEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        blockEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\235\320\276\320\274\320\265\321\200 \320\261\320\273\320\276\320\272\320\260", nullptr));
        optEdit->setPlaceholderText(QCoreApplication::translate("AddStudent", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\321\213\320\265 \321\207\320\260\321\201\321\213 \320\236\320\237\320\242", nullptr));
        activityType->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTWINDOW_H