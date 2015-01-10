//
//  Mouse.h
//  Experiment I
//
//  Created by Morgan Weaver on 1/2/15.
//  Copyright (c) 2015 Morgan Weaver. All rights reserved.
//

#ifndef __Experiment_I__Mouse__
#define __Experiment_I__Mouse__

#include <stdio.h>

class Mouse
{
    public:
        int num;
        Mouse();
        Mouse(int);
    Mouse operator+(Mouse);
};

#endif /* defined(__Experiment_I__Mouse__) */
