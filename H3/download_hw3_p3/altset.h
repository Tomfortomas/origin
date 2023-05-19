#pragma once
#include <iostream>
#include <string>
using namespace std;
class Altset {
public:
    Altset();
    ~Altset();  
    string str;
    Altset(const char *data, int len);
	Altset& operator = (const Altset &altset)
    {
        str=altset.str;
        
    }
    Altset& operator = (Altset &&altset)
    {
        str=move(altset.str);
        
    }

    void inverse(int index);
    void append(int value);
    bool get(int index) const;
    bool empty() const;
    int count() const;
};
