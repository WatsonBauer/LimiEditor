/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *Limiton;
    QPushButton *pushButton;
    QLabel *LimiEidtor;
    QLabel *Copyright;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(350, 250);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        About->setFont(font);
        Limiton = new QLabel(About);
        Limiton->setObjectName(QStringLiteral("Limiton"));
        Limiton->setGeometry(QRect(31, 20, 291, 57));
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 210, 91, 23));
        LimiEidtor = new QLabel(About);
        LimiEidtor->setObjectName(QStringLiteral("LimiEidtor"));
        LimiEidtor->setGeometry(QRect(31, 91, 25, 31));
        Copyright = new QLabel(About);
        Copyright->setObjectName(QStringLiteral("Copyright"));
        Copyright->setGeometry(QRect(70, 100, 241, 72));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\345\205\263\344\272\216 \"LimiEditor\"", 0));
        Limiton->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><img src=\":/Icons/Limiton.png\"/></p></body></html>", 0));
        pushButton->setText(QApplication::translate("About", "\347\241\256\345\256\232", 0));
        LimiEidtor->setText(QApplication::translate("About", "<html><head/><body><p><img src=\":/Icons/LimiEditor.png\" width=\"25\" height=\"25\"/></p></body></html>", 0));
        Copyright->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" font-size:10pt;\">LimiEditor</span></p><p><span style=\" font-size:10pt;\">\347\211\210\346\234\254 1.0</span></p><p><span style=\" font-size:10pt;\">\347\211\210\346\235\203\346\211\200\346\234\211 </span><span style=\" font-size:12pt;\">\302\251 </span><span style=\" font-size:10pt;\">Limiton Inc \344\277\235\347\225\231\346\211\200\346\234\211\346\235\203\345\210\251</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
