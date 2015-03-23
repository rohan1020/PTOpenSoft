//
//  Range.h
//  OpenSoftpt
//
//  Created by Rohan Raja on 18/03/15.
//  Copyright (c) 2015 Rohan Raja. All rights reserved.
//

#ifndef __OpenSoftpt__Range__
#define __OpenSoftpt__Range__

#include <stdio.h>
#include <vector>
#include "Point.h"
#include "MathFunction.h"

using namespace std;

class Range
{
    /* X-Y Range Params */
    
    float x_min, x_max ;
    float y_min, y_max ;
    
    /* Scaling Params */
    
    int pixelsPerPoint_X = 5; // Pixels
    int pixelsPerPoint_Y = 10; // Pixels
    int height = 500 ; // Pixels
    int width = 800 ; // Pixels
    
public:
    
    Range();
    
    int getNumPoints_Y();
    
    int getNumPoints_X();
    
    float getStepSize();
    
    vector<Point> getAllPoints(MathFunction &mathFunc);
    
};



#endif /* defined(__OpenSoftpt__Range__) */
