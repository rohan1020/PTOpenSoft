#include <QtGui>
#include "CanvasStateData.h"
#include <QWidget>
#include <vector>

using namespace std ;

CanvasStateData::CanvasStateData(vector<QRect> &prects, vector<QLine> &plines)
{    
    rects = prects ;
    lines = plines ;

}

CanvasStateData::CanvasStateData(const CanvasStateData &p2) 
{
    rects = p2.rects;
    lines = p2.lines;
    width = p2.width;
    height = p2.height;
}

CanvasStateData::CanvasStateData()
{

}