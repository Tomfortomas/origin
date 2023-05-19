#pragma once
#include <iostream>
#include "vehicle.h"

using namespace std;

class Motor:public Vehicle
{
public:
    void sell();
    Motor(int num,string name,string type="motor");
   
    void describe();
};