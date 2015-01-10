//
//  Mouse.cpp
//  Experiment I
//
//  Created by Morgan Weaver on 1/2/15.
//  Copyright (c) 2015 Morgan Weaver. All rights reserved.
//

#include <iostream>
#include "Mouse.h"
using namespace std;

Mouse::Mouse()
{
    
}

Mouse::Mouse(int a){
    num = a;
}

Mouse Mouse::operator+(Mouse amo){
    Mouse brandNew;
    brandNew.num = num + amo.num;
    return(brandNew);
    
}