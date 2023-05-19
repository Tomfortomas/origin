#pragma once
#include <string>
#include "chef.h"
using namespace std;
class Manager:public Chef
{
    public:
    Chef *chef[1000];
    int num=0;
    Manager();

    void newChef(Chef);
    void order(string);
    void order(string,int);
    ~Manager();
    

};