#pragma once
#include "iostream"
#include "engine.h"
#include "wheel.h"
#include "string"
using namespace std;
class Vehicle
{
public:
    
    Engine e;
    Wheel w;
    
    Vehicle(int num, string engine);
    Vehicle(int num, string engine,string type);
    
    void describe();

};
