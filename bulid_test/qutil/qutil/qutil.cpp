/*
 *  qutil.cpp
 *  qutil
 *
 *  Created by blazeq on 2017. 8. 14..
 *  Copyright © 2017년 blazeq. All rights reserved.
 *
 */

#include <iostream>
#include "qutil.hpp"
#include "qutilPriv.hpp"

void qutil::HelloWorld(const char * s)
{
    qutilPriv *theObj = new qutilPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void qutilPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

