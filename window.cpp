#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "window.h"
#include "CanvasStateData.h"

Window::Window(CanvasStateData cdata) : QWidget(), canvasData(cdata)
{

    gobject = new CanvasState(this, canvasData);

    //gobject->setPrintData(canvasData);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(gobject, 0, 0);
    setLayout(layout);

    setWindowTitle(tr("2d-Plotter"));
}

void Window::redrawCanvasData(CanvasStateData cdata)
{
    canvasData = cdata;
    gobject->setPrintData(canvasData);
}