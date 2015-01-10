//
//  main.cpp
//  Experiment I
//
//  Created by Morgan Weaver on 12/6/14.
//  Copyright (c) 2014 Morgan Weaver. All rights reserved.
//

#include <iostream>
#include "Queen.h"
//#include "Pawn.h"


class Pawn: public Queen
{
public:
    Pawn();
};

int main () {
    Queen mum;
    mum.sayName();
    
    Pawn edwin;
    edwin.sayName();
}


