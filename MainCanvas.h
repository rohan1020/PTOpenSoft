//
//  MainCanvas.h
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#ifndef ___dpaint__MainCanvas__
#define ___dpaint__MainCanvas__

#include <stdio.h>
#include "CanvasDataGenerator.h"
#include "Range.h"
#include "MathFunction.h"
#include "CanvasState.h"
#include "CanvasStateData.h"
#include <vector>

using namespace std ;

class MainCanvas {
    
    Range range;
    vector<MathFunction> functions;
    CanvasStateData totalData ;
    
    
    vector<CanvasDataGenerator> plots ;
    
    float x_tick = 2;
    float y_tick = 2;
    float zoom_tick_x = 2;
    float zoom_tick_y = 2;
    // remove x_min, etc from public.. implement a getter or setter, since other routine procedures need to be implemented while changing the values
    
    
public:
    
    CanvasState *canvas;
    MainCanvas();
    
    MainCanvas(vector<MathFunction> pfuncs, Range prange);
    
    CanvasStateData calculateCanvasData();
    
    void moveCoordinate(int type);
    
    void zoom(int type);
    
    
        
};

#endif /* defined(___dpaint__MainCanvas__) */
