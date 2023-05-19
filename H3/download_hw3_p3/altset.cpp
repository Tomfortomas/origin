#include "altset.h"
Altset::Altset()
{
    
}
Altset::~Altset()
{
    
}
Altset::Altset(const char *data, int len)
{
    str=data;
    str[len]='\0';
}
void Altset::inverse(int index)
{
    int len=str.length();
    switch(str[len-1-index])
    {
        case '1':{
            str[len-1-index]='0';
            break;
        }
        case '0':{
            str[len-1-index]='1';
            break;
        }
    }
    
}
void Altset::append(int value)
{
    char s=value+'0';
    str=s+str;
   
}
bool Altset::get(int index) const
{
    int len=str.length();
    if(str[len-1-index]=='1')
    {
        return 1;
    }
    return 0;
}
bool Altset::empty() const
{
    const char *p=str.c_str();
    if(p[0]=='\0')
    {
        return 1;
    }
    return 0;
}
int Altset::count() const{
    int len=str.length();
    int num=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='1')
        {
            num++;
        }
    }
    return num;
}