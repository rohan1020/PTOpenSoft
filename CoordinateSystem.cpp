//
//  CoordinateSystem.cpp
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#include "CoordinateSystem.h"
#include <QtGui>
#include "Range.h"
#include "Point.h"

CoordinateSystem::CoordinateSystem(QPoint pCenter, Range pRange):center(pCenter), range(pRange)
{
    
}


CoordinateSystem::CoordinateSystem(Range pRange):range(pRange)
{
    center = * new QPoint(range.width/2, range.height/2);
}

QPoint CoordinateSystem::findQPoint(Point p)
{
    int x , y ;
    x = center.x() + p.x*pixelsPerUnit_X;
    y = center.y() - p.y*pixelsPerUnit_Y;
    return * new QPoint(x,y);
}

CoordinateSystem::CoordinateSystem(){
    
}