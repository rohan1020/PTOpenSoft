//
//  CanvasDataGenerator.h
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#ifndef ___dpaint__CanvasDataGenerator__
#define ___dpaint__CanvasDataGenerator__

#include <iostream>
#include <vector>
#include "MathFunction.h"
#include "Range.h"
#include "Point.h"

using namespace std;


class CanvasDataGenerator
{
    Range range ;
    vector<Point> listOfPoints ;
    MathFunction mathFunc ;
    
public:
    
    CanvasDataGenerator();
    
};


#endif /* defined(___dpaint__CanvasDataGenerator__) */
