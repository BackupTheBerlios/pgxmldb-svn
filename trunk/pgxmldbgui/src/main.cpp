#include <qapplication.h>
#include "pgxmldbgui.h"

int main( int argc, char ** argv ) 
{
    QApplication a( argc, argv );
    pgxmldbgui * mw = new pgxmldbgui();
    mw->setCaption( "pgxmldbgui" );
    mw->show();
    a.connect( &a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()) );
    return a.exec();
}
