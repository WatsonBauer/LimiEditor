#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include <QPrinter>
#include <QtPrintSupport/QPageSetupDialog>
#include <QtPrintSupport/QPrintDialog>
#include "searchdialog.h"
#include "about.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:    
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:    
    void closeEvent( QCloseEvent *event );
    void keyPressEvent( QKeyEvent *event );
    void dragEnterEvent( QDragEnterEvent *event );
    void dropEvent( QDropEvent *event );

signals:
    void pasteAvailable( bool );
    
private slots:
    void on_action_New_triggered();
    void on_action_Open_triggered();
    void on_action_Save_triggered();
    void on_action_saveAs_triggered();
    void on_action_pagesetUp_triggered();
    void on_action_Print_triggered();
    void on_action_eXit_triggered();

    void show_rightClickMenu( const QPoint &pt );
    void on_action_Undo_triggered();
    void on_action_Redo_triggered();
    void on_action_Trim_triggered();
    void on_action_Copy_triggered();
    void on_action_Paste_triggered();
    void on_action_deL_triggered();
    void on_action_Find_triggered();
    void on_action_findNext_triggered();
    void on_action_Replace_triggered();
    void on_action_Goto_triggered();
    void on_action_selectAll_triggered();
    void on_action_Date_triggered();

    void on_action_lineWrap_triggered();
    void on_action_Font_triggered();
    void on_action_Statusbar_triggered();

    void on_textEdit_cursorPositionChanged();
    void on_textEdit_textChanged();

    void on_action_About_triggered();

private:
    Ui::MainWindow *ui;
    SearchDialog *_searchDialog;
    QString _fileName;
    QString _defaultTitle;
    void _open_file( QString &fileName );
    void _update_info( QString &fileName );
    void _direct_Open();
    void _direct_Save( QString &fileName );
    int _Save_query();
    QPageSetupDialog *_pageSetupDialog;
    QMenu *_rightClickMenu;
    void _Initialize_rightClickMenu();
    void _setFindReplaceAvailable( bool available = true );
    void _do_if_lineWrapped( bool wrapped = true );
    QLabel *_statusLabel;
    About *_About;
};

#endif // MAINWINDOW_H
