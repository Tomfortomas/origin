#pragma once
#include "operation.h"
using namespace std;
class mi : public OperationNodeTwo
{
    public:
    mi(string name, Node *x1, Node *x2) : OperationNodeTwo(name, x1, x2){}
    virtual ~mi(){};
    void UpdateValue() override;
};