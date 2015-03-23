#include <QApplication>
#include "window.h"
#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "CanvasStateData.h"

#include "CanvasDataGenerator.h"

int main(int argc, char *argv[])
{
    CanvasDataGenerator cd ;
    
    QApplication app(argc, argv);
    
    vector<QRect> rects ;
    rects.push_back(* new QRect(1,1,50,50));
    rects.push_back(* new QRect(80,80,50,50));
    rects.push_back(* new QRect(200,80,30,50));

    vector<QLine> lines ;

    lines.push_back(* new QLine(50,50, 210,150));
    lines.push_back(* new QLine(110,150, 250,150));

    CanvasStateData canvasData = * new CanvasStateData(rects, lines);
    canvasData.width = 600;
    canvasData.height = 100;


    Window window(canvasData);

    window.show();
    return app.exec();
}