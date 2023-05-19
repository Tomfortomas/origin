#pragma once
#include <iostream>
#include <string>
#include "Cow.h"
using namespace std;
class Farm
{
    public:
    int num;
    int day;
    float pro;
    int j;
    
    Farm(int);
    Cow *cow[100];
    void addCow(const Cow &obj);
    void supply(string,int  );
    void startMeal();
    void produceMilk();
    float getMilkProduction();
};