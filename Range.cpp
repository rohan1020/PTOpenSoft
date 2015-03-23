//
//  Range.cpp
//  OpenSoftpt
//
//  Created by Rohan Raja on 18/03/15.
//  Copyright (c) 2015 Rohan Raja. All rights reserved.
//

#include "Range.h"

Range::Range()
{
    x_min = -10 ;
    x_max = 10 ;
    
    y_min = -10 ;
    y_max = 10 ;
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