#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "window.h"
#include "CanvasStateData.h"
#include "MainCanvas.h"


Window::Window() : QWidget()
{
    
    
    
    canvasData = mainCanvas.calculateCanvasData();
    
    gobject = new CanvasState(this, canvasData);
    
    mainCanvas.canvas = gobject;
    
    left = new QPushButton("<", this);
    connect(left, SIGNAL(clicked()), this, SLOT(LeftSlot()));
    right = new QPushButton(">", this);
    connect(right, SIGNAL(clicked()), this, SLOT(RightSlot()));
    up = new QPushButton("Up", this);
    connect(up, SIGNAL(clicked()), this, SLOT(UpSlot()));
    down = new QPushButton("Down", this);
    connect(down, SIGNAL(clicked()), this, SLOT(DownSlot()));
    zin = new QPushButton("+", this);
    connect(zin, SIGNAL(clicked()), this, SLOT(ZinSlot()));
    zout = new QPushButton("-", this);
    connect(zout, SIGNAL(clicked()), this, SLOT(ZoutSlot()));
    
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(up, 0, 1);
    layout->addWidget(left, 1, 0);
    layout->addWidget(gobject, 1, 1);
    layout->addWidget(right, 1, 2);
    layout->addWidget(zin, 2, 0);
    layout->addWidget(down, 2, 1);
    layout->addWidget(zout, 2, 2);
    setLayout(layout);
    
    setWindowTitle(tr("2d-Plotter"));
}

void Window::redrawCanvasData(CanvasStateData cdata)
{
    canvasData = cdata;
    gobject->setPrintData(canvasData);
}


void Window::UpSlot()
{
    
}

void Window::DownSlot()
{
    
}
void Window::LeftSlot()
{
    mainCanvas.MoveLeft();
}
void Window::RightSlot()
{
    mainCanvas.MoveRight();
}
void Window::ZinSlot()
{
    
}
void Window::ZoutSlot()
{
    
}
