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
    CanvasState *canvas;
    
public:
    
    MainCanvas();
    
    MainCanvas(vector<MathFunction> pfuncs, Range prange);
    
    CanvasStateData calculateCanvasData();
    
    
        
};

#endif /* defined(___dpaint__MainCanvas__) */
