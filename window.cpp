#include <QtGui>
//#include "widget.h"
#include "CanvasState.h"
#include "window.h"
#include "CanvasStateData.h"
#include "MainCanvas.h"
#include "FunctionInputWindow.h"

Window::Window() : QWidget()
{
    
//    QDialog *dialog = new QDialog;
//    dialog->setWindowTitle("Dialog");
//    dialog->show();
    
    
    FunctionInputWindow *fiw = new FunctionInputWindow;
    fiw->setWindowTitle("Input Function");
    fiw->show();
    fiw->window = this;
    
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
    
    zin_y = new QPushButton("+", this);
    connect(zin_y, SIGNAL(clicked()), this, SLOT(ZinSlot_y()));
    zout_y = new QPushButton("-", this);
    connect(zout_y, SIGNAL(clicked()), this, SLOT(ZoutSlot_y()));

    
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(up, 0, 1);
    layout->addWidget(left, 1, 0);
    layout->addWidget(gobject, 1, 1);
    layout->addWidget(right, 1, 2);
    layout->addWidget(zin, 2, 0);
    layout->addWidget(down, 2, 1);
    layout->addWidget(zout, 2, 2);
    
    layout->addWidget(zin_y, 0, 0);
    layout->addWidget(zout_y, 0, 2);
    
    setLayout(layout);
    
    setWindowTitle(tr("2d-Plotter"));
    
}

void Window::redrawCanvasData(CanvasStateData cdata)
{
    canvasData = cdata;
    gobject->setPrintData(canvasData);
    
}

void Window::addFunction(string funcTxt)
{
    mainCanvas.addFunction(funcTxt);
    
}
void Window::UpSlot()
{
    mainCanvas.moveCoordinate(3);
    FunctionInputWindow *fiw = new FunctionInputWindow;
    fiw->setWindowTitle("Input Function");
    fiw->show();
    fiw->window = this;
}

void Window::DownSlot()
{
   mainCanvas.moveCoordinate(2);
}
void Window::LeftSlot()
{
    mainCanvas.moveCoordinate(1);
}
void Window::RightSlot()
{
    mainCanvas.moveCoordinate(0);
}
void Window::ZinSlot()
{
    mainCanvas.zoom(0);
}
void Window::ZoutSlot()
{
    mainCanvas.zoom(1);
}

void Window::ZinSlot_y()
{
    mainCanvas.zoom(2);
}
void Window::ZoutSlot_y()
{
    mainCanvas.zoom(3);
}
