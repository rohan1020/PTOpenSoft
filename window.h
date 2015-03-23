#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "CanvasState.h"
#include "CanvasStateData.h"

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

    void redrawCanvasData(CanvasStateData cdata);
    
private:
    CanvasState *gobject;
    CanvasStateData canvasData ;
   
};

#endif