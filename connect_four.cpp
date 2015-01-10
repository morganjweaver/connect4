//
//  connect_four.cpp
//  Experiment I
//
//  Created by Morgan Weaver on 1/9/15.
//  Copyright (c) 2015 Morgan Weaver. All rights reserved.
//

#include "connect_four.h"
#include <iostream>

using namespace std;


Board::Board()
{

}

void Board::draw(){
    int i;
    for (i = 0; i<8; i++){
        cout << "O O O O O O O" << endl;
    }
};