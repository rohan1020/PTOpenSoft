#ifndef CANVAS_STATE_DATA
#define CANVAS_STATE_DATA

#include <QWidget>
#include <QtGui>
#include <vector>

using namespace std ;

class CanvasStateData
{
    

public:
    CanvasStateData(vector<QRect> &prects, vector<QLine> &plines);

    CanvasStateData();

    CanvasStateData(const CanvasStateData &p2);

    vector<QRect> rects ;
    vector<QLine> lines ;
    int width, height ;


    // ToDo - Define other graphic objects
};


#endif