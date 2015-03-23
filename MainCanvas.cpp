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
    //functions.push_back(f2);
    
}

MainCanvas::MainCanvas(vector<MathFunction> pfuncs, Range prange):functions(pfuncs), range(prange){
    
}

CanvasStateData MainCanvas::calculateCanvasData()
{
    
    for(int i=0; i<functions.size();i++)
    {
        CanvasDataGenerator cd(range,functions[i]) ;
        CanvasStateData csd = cd.getCanvasStateData();
        
        totalData = totalData + csd ;
    }
    
    return totalData;
}