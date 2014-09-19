#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QTranslator translator( 0 );
    translator.load( ":/qt_zh_CN.qm" );

    QApplication a(argc, argv);

    a.installTranslator( &translator );

    MainWindow w;
    w.show();
    
    return a.exec();
}
