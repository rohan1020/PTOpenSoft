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
    
    vector<QRect> rects ;
    rects.push_back(* new QRect(1,1,50,50));
    rects.push_back(* new QRect(80,80,50,50));
    rects.push_back(* new QRect(200,80,30,50));

    vector<Line> lines ;

    lines.push_back(* new Line(50,50, 210,150));
    lines.push_back(* new Line(110,150, 250,150));

    CanvasStateData canvasData = * new CanvasStateData(rects, lines);
    canvasData.width = 600;
    canvasData.height = 600;
    
    CanvasDataGenerator cd ;
    CanvasStateData csd = cd.getCanvasStateData();
    csd.width = 1200;
    csd.height = 600;

    Window window(csd);

    window.show();
    return app.exec();
}