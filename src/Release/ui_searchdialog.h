/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *Find;
    QCheckBox *MatchCase_checkBox_1;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Up_radioButton_1;
    QRadioButton *Down_radioButton_1;
    QPushButton *FindNext_pushButton_1;
    QPushButton *Cancel_pushButton_1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_1;
    QLabel *FindWhat_label_1;
    QLineEdit *FindWhat_lineEdit_1;
    QWidget *Replace;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *FindWhat_label_2;
    QLineEdit *FindWhat_lineEdit_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *Up_radioButton_2;
    QRadioButton *Down_radioButton_2;
    QCheckBox *MatchCase_checkBox_2;
    QPushButton *FindNext_pushButton_2;
    QPushButton *Cancel_pushButton_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ReplaceWith_label;
    QLineEdit *ReplaceWith_lineEdit;
    QPushButton *ReplaceAll_pushButton;
    QPushButton *Replace_pushButton;
    QWidget *Goto;
    QPushButton *Cancel_pushButton_3;
    QPushButton *Goto_pushButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *LineNo_label;
    QLineEdit *LineNo_lineEdit;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->setWindowModality(Qt::NonModal);
        SearchDialog->resize(400, 225);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchDialog->sizePolicy().hasHeightForWidth());
        SearchDialog->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SearchDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(SearchDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Find = new QWidget();
        Find->setObjectName(QStringLiteral("Find"));
        MatchCase_checkBox_1 = new QCheckBox(Find);
        MatchCase_checkBox_1->setObjectName(QStringLiteral("MatchCase_checkBox_1"));
        MatchCase_checkBox_1->setGeometry(QRect(20, 103, 101, 16));
        groupBox_1 = new QGroupBox(Find);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        groupBox_1->setGeometry(QRect(120, 80, 151, 50));
        verticalLayout = new QVBoxLayout(groupBox_1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Up_radioButton_1 = new QRadioButton(groupBox_1);
        Up_radioButton_1->setObjectName(QStringLiteral("Up_radioButton_1"));

        horizontalLayout_2->addWidget(Up_radioButton_1);

        Down_radioButton_1 = new QRadioButton(groupBox_1);
        Down_radioButton_1->setObjectName(QStringLiteral("Down_radioButton_1"));
        Down_radioButton_1->setChecked(true);

        horizontalLayout_2->addWidget(Down_radioButton_1);


        verticalLayout->addLayout(horizontalLayout_2);

        FindNext_pushButton_1 = new QPushButton(Find);
        FindNext_pushButton_1->setObjectName(QStringLiteral("FindNext_pushButton_1"));
        FindNext_pushButton_1->setGeometry(QRect(180, 150, 90, 23));
        FindNext_pushButton_1->setDefault(true);
        Cancel_pushButton_1 = new QPushButton(Find);
        Cancel_pushButton_1->setObjectName(QStringLiteral("Cancel_pushButton_1"));
        Cancel_pushButton_1->setGeometry(QRect(280, 150, 90, 23));
        layoutWidget = new QWidget(Find);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 331, 22));
        horizontalLayout_1 = new QHBoxLayout(layoutWidget);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        FindWhat_label_1 = new QLabel(layoutWidget);
        FindWhat_label_1->setObjectName(QStringLiteral("FindWhat_label_1"));

        horizontalLayout_1->addWidget(FindWhat_label_1);

        FindWhat_lineEdit_1 = new QLineEdit(layoutWidget);
        FindWhat_lineEdit_1->setObjectName(QStringLiteral("FindWhat_lineEdit_1"));

        horizontalLayout_1->addWidget(FindWhat_lineEdit_1);

        tabWidget->addTab(Find, QString());
        Replace = new QWidget();
        Replace->setObjectName(QStringLiteral("Replace"));
        layoutWidget1 = new QWidget(Replace);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 331, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        FindWhat_label_2 = new QLabel(layoutWidget1);
        FindWhat_label_2->setObjectName(QStringLiteral("FindWhat_label_2"));

        horizontalLayout_4->addWidget(FindWhat_label_2);

        FindWhat_lineEdit_2 = new QLineEdit(layoutWidget1);
        FindWhat_lineEdit_2->setObjectName(QStringLiteral("FindWhat_lineEdit_2"));

        horizontalLayout_4->addWidget(FindWhat_lineEdit_2);

        groupBox_2 = new QGroupBox(Replace);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 80, 151, 50));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Up_radioButton_2 = new QRadioButton(groupBox_2);
        Up_radioButton_2->setObjectName(QStringLiteral("Up_radioButton_2"));

        horizontalLayout_3->addWidget(Up_radioButton_2);

        Down_radioButton_2 = new QRadioButton(groupBox_2);
        Down_radioButton_2->setObjectName(QStringLiteral("Down_radioButton_2"));
        Down_radioButton_2->setChecked(true);

        horizontalLayout_3->addWidget(Down_radioButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MatchCase_checkBox_2 = new QCheckBox(Replace);
        MatchCase_checkBox_2->setObjectName(QStringLiteral("MatchCase_checkBox_2"));
        MatchCase_checkBox_2->setGeometry(QRect(20, 103, 101, 16));
        FindNext_pushButton_2 = new QPushButton(Replace);
        FindNext_pushButton_2->setObjectName(QStringLiteral("FindNext_pushButton_2"));
        FindNext_pushButton_2->setGeometry(QRect(180, 150, 90, 23));
        FindNext_pushButton_2->setDefault(true);
        Cancel_pushButton_2 = new QPushButton(Replace);
        Cancel_pushButton_2->setObjectName(QStringLiteral("Cancel_pushButton_2"));
        Cancel_pushButton_2->setGeometry(QRect(280, 150, 90, 23));
        layoutWidget_2 = new QWidget(Replace);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 50, 331, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ReplaceWith_label = new QLabel(layoutWidget_2);
        ReplaceWith_label->setObjectName(QStringLiteral("ReplaceWith_label"));

        horizontalLayout_5->addWidget(ReplaceWith_label);

        ReplaceWith_lineEdit = new QLineEdit(layoutWidget_2);
        ReplaceWith_lineEdit->setObjectName(QStringLiteral("ReplaceWith_lineEdit"));

        horizontalLayout_5->addWidget(ReplaceWith_lineEdit);

        ReplaceAll_pushButton = new QPushButton(Replace);
        ReplaceAll_pushButton->setObjectName(QStringLiteral("ReplaceAll_pushButton"));
        ReplaceAll_pushButton->setGeometry(QRect(280, 120, 90, 23));
        Replace_pushButton = new QPushButton(Replace);
        Replace_pushButton->setObjectName(QStringLiteral("Replace_pushButton"));
        Replace_pushButton->setGeometry(QRect(280, 90, 90, 23));
        tabWidget->addTab(Replace, QString());
        Goto = new QWidget();
        Goto->setObjectName(QStringLiteral("Goto"));
        Cancel_pushButton_3 = new QPushButton(Goto);
        Cancel_pushButton_3->setObjectName(QStringLiteral("Cancel_pushButton_3"));
        Cancel_pushButton_3->setGeometry(QRect(280, 150, 90, 23));
        Goto_pushButton = new QPushButton(Goto);
        Goto_pushButton->setObjectName(QStringLiteral("Goto_pushButton"));
        Goto_pushButton->setGeometry(QRect(180, 150, 90, 23));
        Goto_pushButton->setDefault(true);
        layoutWidget_3 = new QWidget(Goto);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 50, 331, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        LineNo_label = new QLabel(layoutWidget_3);
        LineNo_label->setObjectName(QStringLiteral("LineNo_label"));

        horizontalLayout_6->addWidget(LineNo_label);

        LineNo_lineEdit = new QLineEdit(layoutWidget_3);
        LineNo_lineEdit->setObjectName(QStringLiteral("LineNo_lineEdit"));

        horizontalLayout_6->addWidget(LineNo_lineEdit);

        tabWidget->addTab(Goto, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(SearchDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\345\222\214\346\233\277\346\215\242", 0));
#ifndef QT_NO_WHATSTHIS
        Find->setWhatsThis(QApplication::translate("SearchDialog", "\346\237\245\346\211\276", 0));
#endif // QT_NO_WHATSTHIS
        MatchCase_checkBox_1->setText(QApplication::translate("SearchDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231(C)", 0));
        groupBox_1->setTitle(QApplication::translate("SearchDialog", "\346\226\271\345\220\221", 0));
        Up_radioButton_1->setText(QApplication::translate("SearchDialog", "\345\220\221\344\270\212(U)", 0));
        Down_radioButton_1->setText(QApplication::translate("SearchDialog", "\345\220\221\344\270\213(D)", 0));
#ifndef QT_NO_WHATSTHIS
        FindNext_pushButton_1->setWhatsThis(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\215\345\210\260\344\270\213\344\270\200\344\270\252", 0));
#endif // QT_NO_WHATSTHIS
        FindNext_pushButton_1->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", 0));
        Cancel_pushButton_1->setText(QApplication::translate("SearchDialog", "\345\217\226\346\266\210", 0));
#ifndef QT_NO_WHATSTHIS
        FindWhat_label_1->setWhatsThis(QApplication::translate("SearchDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\237\245\346\211\276\345\244\261\350\264\245\357\274\201</span></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        FindWhat_label_1->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\345\206\205\345\256\271(N):", 0));
        tabWidget->setTabText(tabWidget->indexOf(Find), QApplication::translate("SearchDialog", "\346\237\245\346\211\276(D)", 0));
        FindWhat_label_2->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\345\206\205\345\256\271(N):", 0));
        groupBox_2->setTitle(QApplication::translate("SearchDialog", "\346\226\271\345\220\221", 0));
        Up_radioButton_2->setText(QApplication::translate("SearchDialog", "\345\220\221\344\270\212(U)", 0));
        Down_radioButton_2->setText(QApplication::translate("SearchDialog", "\345\220\221\344\270\213(D)", 0));
        MatchCase_checkBox_2->setText(QApplication::translate("SearchDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231(C)", 0));
        FindNext_pushButton_2->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", 0));
        Cancel_pushButton_2->setText(QApplication::translate("SearchDialog", "\345\217\226\346\266\210", 0));
        ReplaceWith_label->setText(QApplication::translate("SearchDialog", "\346\233\277\346\215\242\344\270\272(P):  ", 0));
        ReplaceAll_pushButton->setText(QApplication::translate("SearchDialog", "\345\205\250\351\203\250\346\233\277\346\215\242(A)", 0));
        Replace_pushButton->setText(QApplication::translate("SearchDialog", "\346\233\277\346\215\242(R)", 0));
        tabWidget->setTabText(tabWidget->indexOf(Replace), QApplication::translate("SearchDialog", "\346\233\277\346\215\242(P)", 0));
#ifndef QT_NO_WHATSTHIS
        Goto->setWhatsThis(QApplication::translate("SearchDialog", "\350\267\263\350\241\214", 0));
#endif // QT_NO_WHATSTHIS
        Cancel_pushButton_3->setText(QApplication::translate("SearchDialog", "\345\217\226\346\266\210", 0));
#ifndef QT_NO_WHATSTHIS
        Goto_pushButton->setWhatsThis(QApplication::translate("SearchDialog", "\347\254\254 # \350\241\214\344\270\215\345\255\230\345\234\250", 0));
#endif // QT_NO_WHATSTHIS
        Goto_pushButton->setText(QApplication::translate("SearchDialog", "\350\275\254\345\210\260", 0));
#ifndef QT_NO_WHATSTHIS
        LineNo_label->setWhatsThis(QApplication::translate("SearchDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\350\241\214\345\217\267\351\224\231\350\257\257!</span></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        LineNo_label->setText(QApplication::translate("SearchDialog", "\350\241\214\345\217\267(L):    ", 0));
        tabWidget->setTabText(tabWidget->indexOf(Goto), QApplication::translate("SearchDialog", "\350\275\254\345\210\260(G)", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
