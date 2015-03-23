//
//  CoordinateSystem.h
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#ifndef ___dpaint__CoordinateSystem__
#define ___dpaint__CoordinateSystem__

#include <stdio.h>
#include <QtGui>
#include "Range.h"
#include "Point.h"

class CoordinateSystem {
    
    QPoint center;
    Range range ;
    float pixelsPerUnit_X = 100, pixelsPerUnit_Y = 100;  // 1 unit = x pixels
public:
    
    CoordinateSystem(QPoint pCenter, Range pRange);
    CoordinateSystem(Range pRange);
    
    QPoint findQPoint(Point p);
    
    CoordinateSystem();
    
};

#endif /* defined(___dpaint__CoordinateSystem__) */
