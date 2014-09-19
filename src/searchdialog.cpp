#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog( QWidget *parent, QTextEdit *textEdit ) :
    QDialog(parent),
    ui(new Ui::SearchDialog),
    _textEdit( textEdit )
{
    ui->setupUi(this);

    setWindowFlags( Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint );

    connect( ui->FindWhat_lineEdit_1, SIGNAL( textEdited( QString ) ),
             ui->FindWhat_lineEdit_2, SLOT( setText( QString ) ) );
    connect( ui->FindWhat_lineEdit_2, SIGNAL( textEdited( QString ) ),
             ui->FindWhat_lineEdit_1, SLOT( setText( QString ) ) );

    connect( ui->MatchCase_checkBox_1, SIGNAL( toggled( bool ) ),
             ui->MatchCase_checkBox_2, SLOT( setChecked( bool ) ) );
    connect( ui->MatchCase_checkBox_2, SIGNAL( toggled( bool ) ),
             ui->MatchCase_checkBox_1, SLOT( setChecked( bool ) ) );

    connect( ui->Down_radioButton_1, SIGNAL( toggled( bool ) ),
             ui->Down_radioButton_2, SLOT( setChecked( bool ) ) );
    connect( ui->Down_radioButton_2, SIGNAL( toggled( bool ) ),
             ui->Down_radioButton_1, SLOT( setChecked( bool ) ) );
    connect( ui->Up_radioButton_1, SIGNAL( toggled( bool ) ),
             ui->Up_radioButton_2, SLOT( setChecked ( bool ) ) );
    connect( ui->Up_radioButton_2, SIGNAL( toggled( bool ) ),
             ui->Up_radioButton_1, SLOT( setChecked ( bool ) ) );

    connect( ui->FindNext_pushButton_2, SIGNAL( clicked() ),
             ui->FindNext_pushButton_1, SLOT( click() ) );

    connect( ui->Cancel_pushButton_2, SIGNAL( clicked() ),
             ui->Cancel_pushButton_1, SLOT( click() ) );
    connect( ui->Cancel_pushButton_3, SIGNAL( clicked() ),
             ui->Cancel_pushButton_1, SLOT( click() ) );

    ui->LineNo_lineEdit->setValidator( new QRegExpValidator( QRegExp( "\\d+" ), NULL ) );

    on_FindWhat_lineEdit_1_textChanged( ui->FindWhat_lineEdit_1->text() );
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::setCurrentIndex( search_Type T )
{
    ui->tabWidget->setCurrentIndex( T );
}

void SearchDialog::selectText_inLineEdit( search_Type T )
{
    QLineEdit *temp_lineEdit = _selectedLineEdit( T );
    temp_lineEdit->setFocus();
    temp_lineEdit->selectAll();
}

QLineEdit *SearchDialog::_selectedLineEdit( search_Type T )
{
    switch ( T )
    {
    case SearchDialog::Find:
        return ui->FindWhat_lineEdit_1;

    case SearchDialog::Replace:
        return ui->FindWhat_lineEdit_2;

    case SearchDialog::Goto:
        ui->LineNo_lineEdit->setText( ui->Goto->isEnabled() ?
                                          QString::number( _textEdit->textCursor().blockNumber() + 1 )
                                        : "" );
        return ui->LineNo_lineEdit;

    default:
        return 0;
    }
}

void SearchDialog::on_tabWidget_currentChanged( int index )
{
    _selectedLineEdit( ( search_Type ) index )->selectAll();
}

void SearchDialog::FindNext()
{
    on_FindNext_pushButton_1_clicked();
}

void SearchDialog::on_FindNext_pushButton_1_clicked()
{
    QTextDocument::FindFlags options = 0;

    if ( ui->MatchCase_checkBox_1->isChecked() )
        options = QTextDocument::FindCaseSensitively;

    if ( ui->Up_radioButton_1->isChecked() )
        options = options | QTextDocument::FindBackward;

    if ( ! _textEdit->find( ui->FindWhat_lineEdit_1->text(), options ) )
    {
        QMessageBox mssgBox;
        mssgBox.setWindowTitle( ui->Find->whatsThis() );
        mssgBox.setIcon( QMessageBox::Information );
        mssgBox.setText( ui->FindWhat_label_1->whatsThis() );
        mssgBox.setInformativeText( "<p style = '9px' align = 'center'>"
                                    + ui->FindNext_pushButton_1->whatsThis() + " \""
                                    + ui->FindWhat_lineEdit_1->text() + "\" </font>" );
        mssgBox.addButton( QMessageBox::Ok );
        mssgBox.exec();
    }
}

void SearchDialog::on_Cancel_pushButton_1_clicked()
{
    hide();
}

void SearchDialog::_selectText_inTextEdit( int start, int end )
{
    QTextCursor temp_textCursor = _textEdit->textCursor();
    temp_textCursor.setPosition( start );
    temp_textCursor.setPosition( end, QTextCursor::KeepAnchor );
    _textEdit->setTextCursor( temp_textCursor );
}

void SearchDialog::on_Replace_pushButton_clicked()
{
    if ( _textEdit->textCursor().selectedText() == ui->FindWhat_lineEdit_2->text() )
    {
        _textEdit->textCursor().removeSelectedText();

        int pos = _textEdit->textCursor().position();

        _textEdit->textCursor().insertText( ui->ReplaceWith_lineEdit->text() );

        if ( ui->Down_radioButton_2->isChecked() )
            _selectText_inTextEdit( pos, pos + ui->ReplaceWith_lineEdit->text().length() );
        else
            _selectText_inTextEdit( pos + ui->ReplaceWith_lineEdit->text().length(), pos );
    }

    on_FindNext_pushButton_1_clicked();
}

void SearchDialog::on_ReplaceAll_pushButton_clicked()
{
    QString text = _textEdit->toPlainText();

    Qt::CaseSensitivity cs = Qt::CaseInsensitive;
    if ( ui->MatchCase_checkBox_2->isChecked() )
        cs = Qt::CaseSensitive;

    text.replace( ui->FindWhat_lineEdit_2->text(), ui->ReplaceWith_lineEdit->text(), cs );

    _textEdit->selectAll();
    _textEdit->textCursor().insertText( text );

    _selectText_inTextEdit( 0, 0 );
}

void SearchDialog::on_Goto_pushButton_clicked()
{
    QTextCursor temp_textCursor = _textEdit->textCursor();
    temp_textCursor.setPosition( 0 );
    int LineNo = ui->LineNo_lineEdit->text().toInt() - 1;

    if ( LineNo < 0 || ! temp_textCursor.movePosition( QTextCursor::NextBlock,
                                                       QTextCursor::MoveAnchor,
                                                       LineNo ) )
    {
        QMessageBox mssgBox;
        mssgBox.setWindowTitle( ui->Goto->whatsThis() );
        mssgBox.setText( ui->LineNo_label->whatsThis() );
        mssgBox.setInformativeText( ui->Goto_pushButton->whatsThis()
                                    .replace( "#", ui->LineNo_lineEdit->text() ) );
        mssgBox.setIcon( QMessageBox::Critical );
        mssgBox.addButton( QMessageBox::Ok );
        mssgBox.exec();
    }
    else
        _textEdit->setTextCursor( temp_textCursor );
}

void SearchDialog::set_FindReplaceTabs_Available( bool available )
{
    ui->Find->setEnabled( available );
    ui->Replace->setEnabled( available );
}

void SearchDialog::set_GotoTab_Available( bool available )
{
    ui->Goto->setEnabled( available );
}

void SearchDialog::_set_FindReplaceButtons_Available( bool available )
{
    ui->FindNext_pushButton_1->setEnabled( available );
    ui->FindNext_pushButton_2->setEnabled( available );
    ui->Replace_pushButton->setEnabled( available );
    ui->ReplaceAll_pushButton->setEnabled( available );
}

void SearchDialog::on_FindWhat_lineEdit_1_textChanged( const QString &arg1 )
{
    if ( arg1.isEmpty() )
        _set_FindReplaceButtons_Available( false );
    else
        _set_FindReplaceButtons_Available();
}
