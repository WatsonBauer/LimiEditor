/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_saveAs;
    QAction *action_pagesetUp;
    QAction *action_Print;
    QAction *action_eXit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Trim;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_deL;
    QAction *action_Find;
    QAction *action_findNext;
    QAction *action_Replace;
    QAction *action_Goto;
    QAction *action_selectAll;
    QAction *action_Date;
    QAction *action_lineWrap;
    QAction *action_Font;
    QAction *action_Statusbar;
    QAction *action_Help;
    QAction *action_About;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_layOut;
    QMenu *menu_View;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(600, 450);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/LimiEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Icons/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/Icons/New.png"), QSize(), QIcon::Normal, QIcon::On);
        action_New->setIcon(icon1);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Icons/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/Icons/Open.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Open->setIcon(icon2);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        action_saveAs = new QAction(MainWindow);
        action_saveAs->setObjectName(QStringLiteral("action_saveAs"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_saveAs->setIcon(icon4);
        action_pagesetUp = new QAction(MainWindow);
        action_pagesetUp->setObjectName(QStringLiteral("action_pagesetUp"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/pagesetUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_pagesetUp->setIcon(icon5);
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/Print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Print->setIcon(icon6);
        action_eXit = new QAction(MainWindow);
        action_eXit->setObjectName(QStringLiteral("action_eXit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/eXit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_eXit->setIcon(icon7);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon8);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon9);
        action_Trim = new QAction(MainWindow);
        action_Trim->setObjectName(QStringLiteral("action_Trim"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/Cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Trim->setIcon(icon10);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Icons/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon11);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Icons/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon12);
        action_deL = new QAction(MainWindow);
        action_deL->setObjectName(QStringLiteral("action_deL"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Icons/deL.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_deL->setIcon(icon13);
        action_Find = new QAction(MainWindow);
        action_Find->setObjectName(QStringLiteral("action_Find"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Icons/Find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Find->setIcon(icon14);
        action_findNext = new QAction(MainWindow);
        action_findNext->setObjectName(QStringLiteral("action_findNext"));
        action_Replace = new QAction(MainWindow);
        action_Replace->setObjectName(QStringLiteral("action_Replace"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Icons/Replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Replace->setIcon(icon15);
        action_Goto = new QAction(MainWindow);
        action_Goto->setObjectName(QStringLiteral("action_Goto"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Icons/Goto.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Goto->setIcon(icon16);
        action_selectAll = new QAction(MainWindow);
        action_selectAll->setObjectName(QStringLiteral("action_selectAll"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Icons/selectAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_selectAll->setIcon(icon17);
        action_Date = new QAction(MainWindow);
        action_Date->setObjectName(QStringLiteral("action_Date"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/Icons/Date.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Date->setIcon(icon18);
        action_lineWrap = new QAction(MainWindow);
        action_lineWrap->setObjectName(QStringLiteral("action_lineWrap"));
        action_lineWrap->setCheckable(true);
        action_Font = new QAction(MainWindow);
        action_Font->setObjectName(QStringLiteral("action_Font"));
        action_Statusbar = new QAction(MainWindow);
        action_Statusbar->setObjectName(QStringLiteral("action_Statusbar"));
        action_Statusbar->setCheckable(true);
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName(QStringLiteral("action_Help"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        textEdit->setFont(font);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_layOut = new QMenu(menuBar);
        menu_layOut->setObjectName(QStringLiteral("menu_layOut"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_layOut->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_saveAs);
        menu_File->addSeparator();
        menu_File->addAction(action_pagesetUp);
        menu_File->addAction(action_Print);
        menu_File->addSeparator();
        menu_File->addAction(action_eXit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Redo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Trim);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addAction(action_deL);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Find);
        menu_Edit->addAction(action_findNext);
        menu_Edit->addAction(action_Replace);
        menu_Edit->addAction(action_Goto);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_selectAll);
        menu_Edit->addAction(action_Date);
        menu_layOut->addAction(action_lineWrap);
        menu_layOut->addAction(action_Font);
        menu_View->addAction(action_Statusbar);
        menu_Help->addAction(action_Help);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About);
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(action_saveAs);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_pagesetUp);
        mainToolBar->addAction(action_Print);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Undo);
        mainToolBar->addAction(action_Redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Trim);
        mainToolBar->addAction(action_Copy);
        mainToolBar->addAction(action_Paste);
        mainToolBar->addAction(action_deL);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Find);
        mainToolBar->addAction(action_Replace);
        mainToolBar->addAction(action_Goto);
        mainToolBar->addAction(action_selectAll);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Date);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\227\240\346\240\207\351\242\230 - LimiEditor", 0));
        action_New->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", 0));
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(O)...", 0));
#ifndef QT_NO_TOOLTIP
        action_Open->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200(O)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        action_Open->setWhatsThis(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
#endif // QT_NO_WHATSTHIS
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", 0));
#ifndef QT_NO_WHATSTHIS
        action_Save->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\350\257\245\346\226\207\346\241\243\345\267\262\350\242\253\344\277\256\346\224\271</span></p><p>\346\230\257\345\220\246\344\277\235\345\255\230\350\277\231\344\272\233\344\277\256\346\224\271\357\274\237</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_saveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(A)...", 0));
#ifndef QT_NO_WHATSTHIS
        action_saveAs->setWhatsThis(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", 0));
#endif // QT_NO_WHATSTHIS
        action_pagesetUp->setText(QApplication::translate("MainWindow", "\351\241\265\351\235\242\350\256\276\347\275\256(U)...", 0));
        action_Print->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(P)...", 0));
        action_Print->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        action_eXit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", 0));
        action_Undo->setText(QApplication::translate("MainWindow", "\345\220\216\351\200\200(U)", 0));
        action_Undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        action_Redo->setText(QApplication::translate("MainWindow", "\345\211\215\350\277\233(R)", 0));
        action_Redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        action_Trim->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(T)", 0));
        action_Trim->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        action_Copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(C)", 0));
        action_Copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_Paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(P)", 0));
        action_Paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        action_deL->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244(L)", 0));
        action_deL->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        action_Find->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(F)...", 0));
        action_Find->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        action_findNext->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(N)", 0));
        action_findNext->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        action_Replace->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242(R)...", 0));
        action_Replace->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        action_Goto->setText(QApplication::translate("MainWindow", "\350\275\254\345\210\260(G)...", 0));
        action_Goto->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        action_selectAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211(A)", 0));
        action_selectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        action_Date->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264/\346\227\245\346\234\237(D)", 0));
        action_Date->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        action_lineWrap->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214(W)", 0));
        action_Font->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223(F)...", 0));
        action_Statusbar->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(S)", 0));
        action_Help->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251(H)", 0));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216LimiEditor(A)", 0));
#ifndef QT_NO_WHATSTHIS
        menu_File->setWhatsThis(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\226\207\346\241\243(*.txt);;\346\211\200\346\234\211\346\226\207\344\273\266(*.*)", 0));
#endif // QT_NO_WHATSTHIS
        menu_File->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", 0));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(E)", 0));
        menu_layOut->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217(O)", 0));
        menu_View->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213(V)", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(H)", 0));
#ifndef QT_NO_WHATSTHIS
        statusBar->setWhatsThis(QApplication::translate("MainWindow", "\347\254\254 # \350\241\214\357\274\214\347\254\254 $ \345\210\227", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
