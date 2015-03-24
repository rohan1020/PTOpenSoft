//
//  MathFunction.cpp
//  OpenSoftpt
//
//  Created by Rohan Raja on 18/03/15.
//  Copyright (c) 2015 Rohan Raja. All rights reserved.
//

#include "MathFunction.h"
#include <iostream>
#include<cmath>

using namespace std;

MathFunction::MathFunction()
{
    
}


MathFunction::MathFunction(string pfuncTxt): funcTxt(pfuncTxt)
{
    
}


float MathFunction::getYVal(float x)
{
    if(isSin == 1)
        return cos(x) ;
    else
        return x*x*x;
}