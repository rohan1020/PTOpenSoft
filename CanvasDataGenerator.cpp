//
//  CanvasDataGenerator.cpp
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#include "CanvasDataGenerator.h"
#include "CanvasStateData.h"
#include "Line.h"
#include "CoordinateSystem.h"
#include <QtGui>

CanvasDataGenerator::CanvasDataGenerator()
{
    coordinateSystem = new CoordinateSystem(range);
    
    listOfPoints = range.getAllPoints(mathFunc);
    
//    for (int i=0; i<listOfPoints.size(); i++) {
//        cout << " \n " << listOfPoints[i] ;
//        
//    }
}

CanvasStateData CanvasDataGenerator::getCanvasStateData()
{
    vector<Line> lines = getPlotLines();
    vector<QRect> rects;
    CanvasStateData csd = *new CanvasStateData(rects, lines);
    
    return csd ;
}

vector<Line> CanvasDataGenerator::getPlotLines()
{
    
    vector<Line> lines ;
    
    for (int i=0; i<listOfPoints.size()-1; i++) {
        
        Point p1 = listOfPoints[i];
        Point p2 = listOfPoints[i+1];
        QPoint q1 = coordinateSystem->findQPoint(p1);
        QPoint q2 = coordinateSystem->findQPoint(p2);
        Line l = * new Line(q1,q2);
        lines.push_back(l);
        
    }
    
    return lines;
    
}



