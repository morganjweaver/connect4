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


Board::Board(int h,int w)
{
    height = h;
    width = w;
}

void Board::draw(){
    int i;
    for (i = 0; i<height; i++){
        int b;
        for (b=0; b<width; b++){
            cout << "O ";
        };
        cout << endl;
    }
};