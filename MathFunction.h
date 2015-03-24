//
//  MathFunction.h
//  OpenSoftpt
//
//  Created by Rohan Raja on 18/03/15.
//  Copyright (c) 2015 Rohan Raja. All rights reserved.
//

#ifndef __OpenSoftpt__MathFunction__
#define __OpenSoftpt__MathFunction__

#include <stdio.h>
#include <string>
#include <QtGui>

using namespace std;

class MathFunction {
    
    string funcTxt;
    
public:
    
    int isSin = 1 ; //TMP
    QPen qpen;
    
    MathFunction();
    MathFunction(string pfuncTxt, QPen pPen = *new QPen(Qt::black));
    
    float getYVal(float x);
    
};


#endif /* defined(__OpenSoftpt__MathFunction__) */
