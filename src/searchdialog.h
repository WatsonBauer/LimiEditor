#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include <QTextEdit>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SearchDialog( QWidget *parent = 0, QTextEdit *textEdit = 0 );
    ~SearchDialog();
    enum search_Type { Find = 0, Replace = 1, Goto = 2 };
    void setCurrentIndex( search_Type T );
    void selectText_inLineEdit( search_Type T );
    void set_FindReplaceTabs_Available( bool available = true );
    void set_GotoTab_Available( bool available = true );
    void FindNext();

private slots:
    void on_tabWidget_currentChanged(int index);
    void on_FindNext_pushButton_1_clicked();
    void on_Cancel_pushButton_1_clicked();
    void on_Replace_pushButton_clicked();
    void on_ReplaceAll_pushButton_clicked();
    void on_Goto_pushButton_clicked();

    void on_FindWhat_lineEdit_1_textChanged(const QString &arg1);

private:
    Ui::SearchDialog *ui;
    QTextEdit *_textEdit;
    QLineEdit *_selectedLineEdit( search_Type T );
    void _selectText_inTextEdit( int start, int end );
    void _set_FindReplaceButtons_Available( bool available = true );
};

#endif // SEARCHDIALOG_H
