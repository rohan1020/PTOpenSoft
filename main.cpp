#include <QApplication>
#include "window.h"
#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "CanvasStateData.h"

#include "CanvasDataGenerator.h"

int main(int argc, char *argv[])
{
    
    QApplication app(argc, argv);
    
    Range r;
    MathFunction f, f2;
    f2.isSin = 0;
    
    CanvasDataGenerator cd(r,f) ;
    CanvasStateData csd = cd.getCanvasStateData();
    
    CanvasDataGenerator cd2(r,f2) ;
    CanvasStateData csd2 = cd2.getCanvasStateData();
    
    Window window(csd+csd2);
    window.show();
    
    return app.exec();
}