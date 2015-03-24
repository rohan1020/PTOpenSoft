#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include "CanvasState.h"
#include "CanvasStateData.h"
#include "MainCanvas.h"
#include <string>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

    void redrawCanvasData(CanvasStateData cdata);
    
    void addFunction(string funcTxt);
    
private:
    CanvasState *gobject;
    CanvasStateData canvasData ;
    MainCanvas mainCanvas ;
    
    QPushButton *up;
    QPushButton *down;
    QPushButton *left;
    QPushButton *right;
    QPushButton *zin;
    QPushButton *zout;
    QPushButton *zin_y;
    QPushButton *zout_y;
    
    private slots:
    void UpSlot();
    void DownSlot();
    void LeftSlot();
    void RightSlot();
    void ZinSlot();
    void ZoutSlot();
    void ZinSlot_y();
    void ZoutSlot_y();
   
};

#endif