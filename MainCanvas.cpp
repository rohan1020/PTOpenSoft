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

void MainCanvas::moveCoordinate(int type)
{
    switch (type) {
        case 0:
            range.moveCoordinate(x_tick, 0);
            break;
            
        case 1:
            range.moveCoordinate(x_tick, 1);
            break;
            
        case 2:
            range.moveCoordinate(y_tick, 2);
            break;
            
        case 3:
            range.moveCoordinate(y_tick, 3);
            break;
            
        default:
            break;
            
    }
    
    calculateCanvasData();
    canvas->setPrintData(totalData);
}

void MainCanvas::zoom(int type)
{
    switch (type) {
            
        case 0:
            range.zoom(zoom_tick_x, 0);
            break;
            
        case 1:
            range.zoom(zoom_tick_x, 1);
            break;
            
        case 2:
            range.zoom(zoom_tick_y, 2);
            break;
            
        case 3:
            range.zoom(zoom_tick_y, 3);
            break;
            
        default:
            break;
            
    }
    
    calculateCanvasData();
    canvas->setPrintData(totalData);
}