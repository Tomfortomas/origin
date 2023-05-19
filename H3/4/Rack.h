#pragma once
#include <iostream>
using namespace std;
class Rack
{
    public:
    int rack[1000]={0};
    int num=0;
    void operator+=(int a)
    {
        
        rack[num]=a;
        num++;
        
    }
    void operator+=(Rack&A)
    {
        for(int i=num;i<num+A.num;i++)
        {
            rack[i]=A.rack[i-num];
        }
        num+=A.num;
    }
    friend ostream& operator<<(ostream&o,Rack &A)
    {
        
        for(int i=0;i<A.num;i++){
            o<<' '<<A.rack[i];
        }
        return o;
    }
    friend Rack operator,(int a,Rack&A)
    {
        Rack B;
        for(int i=A.num;i>0;i--)
        {
            B.rack[i]=A.rack[i-1];
        }
        B.rack[0]=a;
        B.num=A.num+1;
        return B;
    }
    friend Rack operator,(int a,Rack&&A)
    {
        Rack B;
        for(int i=A.num;i>0;i--)
        {
            B.rack[i]=A.rack[i-1];
        }
        B.rack[0]=a;
        B.num=A.num+1;
        return B;
    }
    friend Rack operator,(Rack&A,int a)
    {
        Rack B;
        for(int i=0;i<A.num;i++)
        {
            B.rack[i]=A.rack[i];
        }
        B.rack[A.num]=a;
        B.num=A.num+1;
        return B;
    }
    friend Rack operator,(Rack&&A,int a)
    {
        Rack B;
        for(int i=0;i<A.num;i++)
        {
            B.rack[i]=A.rack[i];
        }
        B.rack[A.num]=a;
        B.num=A.num+1;
        return B;
    }
    friend Rack operator,(Rack&A,Rack &B)
    {
        Rack C;
        for(int i=0;i<A.num;i++)
        {
            C.rack[i]=A.rack[i];
        }
        C.num+=A.num;
        for(int i=0;i<B.num;i++)
        {
            C.rack[i+C.num]=B.rack[i];
        }
        C.num+=B.num;
        return C;
    }
    friend Rack operator,(Rack&A,Rack &&B)
    {
        Rack C;
        for(int i=0;i<A.num;i++)
        {
            C.rack[i]=A.rack[i];
        }
        C.num+=A.num;
        for(int i=0;i<B.num;i++)
        {
            C.rack[i+C.num]=B.rack[i];
        }
        C.num+=B.num;
        return C;
    }
    friend Rack operator,(Rack&&A,Rack &&B)
    {
        Rack C;
        for(int i=0;i<A.num;i++)
        {
            C.rack[i]=A.rack[i];
        }
        C.num+=A.num;
        for(int i=0;i<B.num;i++)
        {
            C.rack[i+C.num]=B.rack[i];
        }
        C.num+=B.num;
        return C;
    }
    friend Rack operator,(Rack&&A,Rack &B)
    {
        Rack C;
        for(int i=0;i<A.num;i++)
        {
            C.rack[i]=A.rack[i];
        }
        C.num+=A.num;
        for(int i=0;i<B.num;i++)
        {
            C.rack[i+C.num]=B.rack[i];
        }
        C.num+=B.num;
        return C;
    }
    int operator>(Rack&A)
    {
        if(num>A.num)
        {
            return 1;
        }
        return 0;
    }
    int operator<(Rack&A)
    {
        if(num<A.num)
        {
            return 1;
        }
        return 0;
    }
    int operator==(Rack&A)
    {
        if(num==A.num)
        {
            return 1;
        }
        return 0;
    }
    Rack operator&(Rack&A){
        Rack C;
        
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<A.num;j++)
            {
                if(rack[i]==A.rack[j])
                {
                    bool is=false;
                    for(int k=0;k<C.num;k++)
                    {
                        if(rack[i]==C.rack[k])
                        {
                            is=true;
                            break;
                        }
                    }
                    if(is==false)
                    {
                        C.rack[C.num]=rack[i];
                        C.num++;

                    }
                }
            }
        }
        return C;
    }
    int operator()(int value)
    {
        int count=0;
        for(int i=0;i<num;i++)
        {
            if(rack[i]==value)
            {
                count++;
            }
        }
        return count;
    }
    void operator~()
    {
        int a[1000]={0};
        for(int i=0;i<num;i++)
        {
            a[i]=rack[num-1-i];
        }
        for(int i=0;i<num;i++)
        {
            rack[i]=a[i];
        }
    }
    void operator--()
    {
        num--;
        for(int i=0;i<num;i++)
        {
            rack[i]=rack[i+1];
        }
    }
    void operator--(int)
    {
        num--;
        rack[num]=0;
    }
};