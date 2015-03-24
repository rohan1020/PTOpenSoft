#include <QApplication>
#include "window.h"
#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "CanvasStateData.h"

#include "CanvasDataGenerator.h"

#include "FunctionInputWindow.h"

int main(int argc, char *argv[])
{
    
    QApplication app(argc, argv);
    
    Window window;
    //window.show();
    
    
    return app.exec();
}