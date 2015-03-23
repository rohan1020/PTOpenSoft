//
//  CanvasDataGenerator.cpp
//  2dpaint
//
//  Created by Rohan Raja on 23/03/15.
//
//

#include "CanvasDataGenerator.h"

CanvasDataGenerator::CanvasDataGenerator()
{
    listOfPoints = range.getAllPoints(mathFunc);
    
    for (int i=0; i<listOfPoints.size(); i++) {
        cout << " \n " << listOfPoints[i] ;
        }
}