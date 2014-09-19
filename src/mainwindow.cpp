#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget( ui->textEdit );
    ui->textEdit->setAcceptDrops( false );
    setAcceptDrops( true );

    _defaultTitle = windowTitle();

    ui->textEdit->setStyleSheet( "selection-color: white; selection-background-color: #3399ff;" );

    _pageSetupDialog = new QPageSetupDialog( this );

    connect( ui->textEdit, SIGNAL( undoAvailable( bool ) ),
             ui->action_Undo, SLOT( setEnabled( bool ) ) );
    connect( ui->textEdit, SIGNAL( redoAvailable(bool) ),
             ui->action_Redo, SLOT( setEnabled( bool ) ) );

    ui->textEdit->undoAvailable( false );
    ui->textEdit->redoAvailable( false );

    connect( ui->textEdit, SIGNAL( copyAvailable( bool ) ),
             ui->action_Trim, SLOT( setEnabled( bool ) ) );
    connect( ui->textEdit, SIGNAL( copyAvailable( bool ) ),
             ui->action_Copy, SLOT( setEnabled( bool ) ) );
    connect( this, SIGNAL( pasteAvailable( bool ) ),
             ui->action_Paste, SLOT( setEnabled( bool ) ) );
    connect( ui->textEdit, SIGNAL( copyAvailable( bool ) ),
             ui->action_deL, SLOT( setEnabled( bool ) ) );

    ui->textEdit->copyAvailable( false );

    _Initialize_rightClickMenu();

    _searchDialog = new SearchDialog( this, ui->textEdit );

    connect( ui->action_lineWrap, SIGNAL( toggled( bool ) ),
             ui->action_Goto, SLOT( setDisabled( bool ) ) );
    connect( ui->action_lineWrap, SIGNAL( toggled( bool ) ),
             ui->action_Statusbar, SLOT( setDisabled( bool ) ) );

    ui->statusBar->setHidden( true );
    _statusLabel = new QLabel;
    ui->statusBar->addPermanentWidget( _statusLabel );

    on_textEdit_cursorPositionChanged();
    on_textEdit_textChanged();

    _About = new About( this );
}

void MainWindow::_Initialize_rightClickMenu()
{
    ui->textEdit->setContextMenuPolicy( Qt::CustomContextMenu );
    _rightClickMenu = ui->textEdit->createStandardContextMenu();
    _rightClickMenu->clear();
    _rightClickMenu->addAction( ui->action_Undo );
    _rightClickMenu->addAction( ui->action_Redo );
    _rightClickMenu->addSeparator();
    _rightClickMenu->addAction( ui->action_Trim );
    _rightClickMenu->addAction( ui->action_Copy );
    _rightClickMenu->addAction( ui->action_Paste );
    _rightClickMenu->addAction( ui->action_deL );
    _rightClickMenu->addSeparator();
    _rightClickMenu->addAction( ui->action_selectAll );
    connect( ui->textEdit, SIGNAL( customContextMenuRequested( const QPoint & ) ),
             this, SLOT( show_rightClickMenu( const QPoint & ) ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent( QCloseEvent *event )
{
    int ret;

    if ( ui->textEdit->document()->isModified() )
    {
        ret = _Save_query();
    }

    if ( ret != QMessageBox::Cancel )
        event->accept();
    else
        event->ignore();
}

void MainWindow::keyPressEvent( QKeyEvent *event )
{
    QMainWindow::keyPressEvent( event );
    emit pasteAvailable( ui->textEdit->canPaste() );
}

void MainWindow::dragEnterEvent( QDragEnterEvent *event )
{
    event->acceptProposedAction();
}

void MainWindow::dropEvent( QDropEvent *event )
{
    QList<QUrl> urls = event->mimeData()->urls();
    if ( urls.isEmpty() )
        return;

    QString fileName = urls.first().toLocalFile();
    if ( fileName.isEmpty() )
        return;

    int ret;
    if ( ui->textEdit->document()->isModified() )
        ret = _Save_query();

    if ( ret != QMessageBox::Cancel )
        _open_file( fileName );
}

void MainWindow::_open_file( QString &fileName )
{
    QFile File( fileName );
    if ( File.open( QFile::ReadOnly | QFile::Text ) )
    {
        QTextStream in( &File );
        ui->textEdit->setPlainText( in.readAll() );
        File.close();
        _update_info( fileName );
    }
}

void MainWindow::_update_info( QString &fileName )
{
    _fileName = fileName;
    fileName = _fileName.right( _fileName.size()
                               - _fileName.lastIndexOf( "/" )
                               - 1 );
    setWindowTitle( fileName + " - LimiEditor" );
}

void MainWindow::_direct_Open()
{
    QString fileName = QFileDialog::getOpenFileName( this, ui->action_Open->whatsThis(),
                                                     _fileName, ui->menu_File->whatsThis() );
    if ( ! fileName.isEmpty() )
        _open_file( fileName );
}

void MainWindow::_direct_Save( QString &fileName )
{
    QFile File( fileName );
    if ( File.open( QFile::WriteOnly | QFile::Text ) )
    {
        QTextStream out( &File );
        out << ui->textEdit->toPlainText();
        out.flush();
        File.close();
        ui->textEdit->document()->setModified( false );

        if ( fileName != _fileName )
            _update_info( fileName );
    }
}

int MainWindow::_Save_query()
{
    QMessageBox mssgBox;
    mssgBox.setText( ui->action_Save->whatsThis() );
    mssgBox.setStandardButtons( QMessageBox::Yes |
                                QMessageBox::No |
                                QMessageBox::Cancel );
    int ret = mssgBox.exec();

    if ( ret == QMessageBox::Yes )
    {
        on_action_Save_triggered();

        if ( _fileName.isEmpty() )
            ret = QMessageBox::Cancel;
    }

    return ret;
}

void MainWindow::on_action_New_triggered()
{
    int ret;
    if ( ui->textEdit->document()->isModified() )
        ret = _Save_query();

    if ( ret != QMessageBox::Cancel )
    {
        _fileName = "";
        ui->textEdit->setText( "" );
        setWindowTitle( _defaultTitle );
    }
}

void MainWindow::on_action_Open_triggered()
{
    int ret;
    if ( ui->textEdit->document()->isModified() )
        ret = _Save_query();

    if ( ret != QMessageBox::Cancel )
        _direct_Open();
}

void MainWindow::on_action_Save_triggered()
{   
    if ( _fileName.isEmpty() )
    {
        QString fileName = QFileDialog::getSaveFileName( this, ui->action_saveAs->whatsThis(),
                                                         _fileName, ui->menu_File->whatsThis() );
        _direct_Save( fileName );
    }
    else
        _direct_Save( _fileName );
}

void MainWindow::on_action_saveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName( this, ui->action_saveAs->whatsThis(),
                                                     _fileName, ui->menu_File->whatsThis() );

    _direct_Save( fileName );
}

void MainWindow::on_action_pagesetUp_triggered()
{
    _pageSetupDialog->show();
}

void MainWindow::on_action_Print_triggered()
{
    QPrinter *printer = _pageSetupDialog->printer();
    QPrintDialog dialog( printer, this );
    if ( dialog.exec() == QDialog::Accepted )
        ui->textEdit->print( printer );
}

void MainWindow::on_action_eXit_triggered()
{
    close();
}

void MainWindow::show_rightClickMenu( const QPoint &pt )
{
    _rightClickMenu->show();
    _rightClickMenu->exec( ui->textEdit->mapToGlobal( pt ) );
}

void MainWindow::on_action_Undo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_action_Redo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_action_Trim_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_action_Copy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_action_Paste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_action_deL_triggered()
{
    ui->textEdit->textCursor().removeSelectedText();
}


void MainWindow::_setFindReplaceAvailable( bool available )
{
    ui->action_Find->setEnabled( available );
    ui->action_findNext->setEnabled( available );
    ui->action_Replace->setEnabled( available );
    _searchDialog->set_FindReplaceTabs_Available( available );
}

void MainWindow::on_textEdit_textChanged()
{
    if ( ui->textEdit->toPlainText().isEmpty() )
        _setFindReplaceAvailable( false );
    else
        _setFindReplaceAvailable();
}

void MainWindow::on_action_Find_triggered()
{
    _searchDialog->setCurrentIndex( SearchDialog::Find );
    _searchDialog->selectText_inLineEdit( SearchDialog::Find );
    _searchDialog->show();
}

void MainWindow::on_action_findNext_triggered()
{
    _searchDialog->FindNext();
}

void MainWindow::on_action_Replace_triggered()
{
    _searchDialog->setCurrentIndex( SearchDialog::Replace );
    _searchDialog->selectText_inLineEdit( SearchDialog::Replace );
    _searchDialog->show();
}

void MainWindow::on_action_Goto_triggered()
{
    _searchDialog->setCurrentIndex( SearchDialog::Goto );
    _searchDialog->selectText_inLineEdit( SearchDialog::Goto );
    _searchDialog->show();
}

void MainWindow::on_action_selectAll_triggered()
{
    ui->textEdit->selectAll();
}

void MainWindow::on_action_Date_triggered()
{
    ui->textEdit->textCursor().insertText( QDateTime::currentDateTime().toString( "hh:mm yyyy-MM-dd" ) );
}

void MainWindow::_do_if_lineWrapped( bool wrapped )
{
    ui->action_lineWrap->setChecked( wrapped );
    ui->statusBar->setHidden( wrapped || ! ui->action_Statusbar->isChecked() );
    _searchDialog->set_GotoTab_Available( ! wrapped );
}

void MainWindow::on_action_lineWrap_triggered()
{
    if ( ui->textEdit->lineWrapMode() == QTextEdit::NoWrap )
    {
        ui->textEdit->setLineWrapMode( QTextEdit::WidgetWidth );
        _do_if_lineWrapped();
    }
    else
    {
        ui->textEdit->setLineWrapMode( QTextEdit::NoWrap );
        _do_if_lineWrapped( false );
    }
}

void MainWindow::on_action_Font_triggered()
{
    bool Ok;
    QFont font = QFontDialog::getFont( &Ok, ui->textEdit->currentFont(), this );
    if ( Ok )
        ui->textEdit->setFont( font );
}

void MainWindow::on_action_Statusbar_triggered()
{
    ui->statusBar->setHidden( ! ui->statusBar->isHidden() );
    ui->action_Statusbar->setChecked( ! ui->statusBar->isHidden() );
}

void MainWindow::on_textEdit_cursorPositionChanged()
{
    QString status = ui->statusBar->whatsThis();
    status.replace( "#", QString::number( ui->textEdit->textCursor().blockNumber() + 1 ) );
    status.replace( "$", QString::number( ui->textEdit->textCursor().columnNumber() + 1 ) );
    _statusLabel->setText( status );
}

void MainWindow::on_action_About_triggered()
{
    _About->show();
}
