#pragma once
#include "operation.h"
using namespace std;
class ad : public OperationNodeTwo
{
    public:
    ad(string name, Node *x1, Node *x2) : OperationNodeTwo(name, x1, x2){}
    virtual ~ad(){};
    void UpdateValue() override;
    
};
