//
//  MainCanvas.cpp
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#include "MainCanvas.h"

MainCanvas::MainCanvas()
{
    MathFunction f, f2;
    f2.isSin = 0;
    
    functions.push_back(f);
    functions.push_back(f2);
    
}

MainCanvas::MainCanvas(vector<MathFunction> pfuncs, Range prange):functions(pfuncs), range(prange){
    
}

CanvasStateData MainCanvas::calculateCanvasData()
{
    totalData = * new CanvasStateData;
    
    for(int i=0; i<functions.size();i++)
    {
        CanvasDataGenerator cd(range,functions[i]) ;
        CanvasStateData csd = cd.getCanvasStateData();
        
        totalData = totalData + csd ;
    }
    
    return totalData;
}

void MainCanvas::MoveRight()
{
    range.x_max = range.x_max - 2;
    range.x_min = range.x_min - 2;
    range.calculateCoordinateSystem();
    
    //range.y_min = range.y_min + 2;
    
    calculateCanvasData();
    canvas->setPrintData(totalData);
    
}

void MainCanvas::MoveLeft()
{
    range.x_max = range.x_max + 2;
    range.x_min = range.x_min + 2;
    range.calculateCoordinateSystem();
    
    //range.y_min = range.y_min + 2;
    
    calculateCanvasData();
    canvas->setPrintData(totalData);
    
}