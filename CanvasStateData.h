#ifndef CANVAS_STATE_DATA
#define CANVAS_STATE_DATA

#include <QWidget>
#include <QtGui>
#include <vector>
#include "Line.h"

using namespace std ;

class CanvasStateData
{
    

public:
    CanvasStateData(vector<QRect> &prects, vector<Line> &plines);

    CanvasStateData();

    CanvasStateData(const CanvasStateData &p2);

    vector<QRect> rects ;
    vector<Line> lines ;
    int width, height ;


    // ToDo - Define other graphic objects
};


#endif