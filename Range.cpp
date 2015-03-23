//
//  Range.cpp
//  OpenSoftpt
//
//  Created by Rohan Raja on 18/03/15.
//  Copyright (c) 2015 Rohan Raja. All rights reserved.
//

#include "Range.h"
#include <QtGui>


Range::Range()
{
    x_min = -3.14*2 ;
    x_max = 3.14*9 ;
    
    y_min = -10 ;
    y_max = 10 ;
    
    calculateCoordinateSystem();
    
}

void Range::setParams(float px_min,float px_max,float py_min,float py_max, int pwidth, int pheight )
{
    x_min = px_min;
    x_max = px_max;
    y_min = py_min;
    y_max = py_max;
    width = pwidth;
    height = pheight;
    
    calculateCoordinateSystem();

}

void Range::calculateCoordinateSystem()
{
    pixelsPerUnit_X = width / (x_max - x_min) ;
    pixelsPerUnit_Y = height / (y_max - y_min);
    
    center = * new QPoint(-1*x_min*pixelsPerUnit_X, y_max*pixelsPerUnit_Y);
    
    x_axis = * new Line(*new QPoint(0,center.y()), *new QPoint(width,center.y()));
    
    y_axis = * new Line(*new QPoint(center.x(),0), *new QPoint(center.x(),height));
}

int Range::getNumPoints_Y()
{
    return height/pixelsPerPoint_Y ;
}

int Range::getNumPoints_X()
{
    return width/pixelsPerPoint_X ;
}

float Range::getStepSize()
{
    int numX = getNumPoints_X();
    float rangeNum = x_max - x_min ;
    return rangeNum/numX ;
}

vector<Point> Range::getAllPoints(MathFunction &mathFunc)
{
    vector<Point> points ;
    
    float curX = x_min , curY;
    float stepSize = getStepSize();
    
    while (curX <= x_max) {
        curY = mathFunc.getYVal(curX);
        points.push_back(* new Point(curX, curY));
        
        curX = curX + stepSize ;
    }
    
    return points;
}

QPoint Range::findQPoint(Point p)
{
    int x , y ;
    x = center.x() + p.x*pixelsPerUnit_X;
    y = center.y() - p.y*pixelsPerUnit_Y;
    return * new QPoint(x,y);
}