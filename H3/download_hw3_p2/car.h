#pragma once
#include "iostream"
#include "vehicle.h"
#include "string"
using namespace std;
class Car:public Vehicle
{
public:
    Car(int,string,string type="car");
    void describe();
    
    
};