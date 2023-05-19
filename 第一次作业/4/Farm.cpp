#include "Farm.h"
using namespace std;

Farm::Farm(int n)
{
    num=n;
    day=0;
    pro=0;
    j=0;
}
void Farm::addCow(const Cow &obj)
{
    
    cow[j]=new Cow("none",0,0,0);
    *cow[j]=obj;
    j++;


    
}
void Farm::startMeal()
{
    day++;
   for(int i=0;i<num;i++)
   {
        if(((cow[i])->meal)>=((cow[i])->l))
        {
            
            ((cow[i])->sign)=0;
            
            if(((cow[i])->meal)<=((cow[i])->u))
            {
                ((cow[i])->meal)=0;
            }
            else
            {
                ((cow[i])->meal)-=((cow[i])->u);
            }
        }
        else if(((cow[i])->meal)>0)
        {
            
            ((cow[i])->sign)=1;
            ((cow[i])->meal)=0;
        }
        else
        {
            
            ((cow[i])->sign)=2;
        }

   }
}
void Farm::supply(string _name, int a)
{
    for(int i=0;i<num;i++)
    {
        
        if(_name==((cow[i])->name))
        {
            ((cow[i])->meal)+=a;
            
            return;
        }
    }
}
void Farm:: produceMilk()
{
    for(int i=0;i<num;i++)
   {
    
        if(((cow[i])->sign)==0)
        {
           pro+=((cow[i])->m);
           
        }
        else if(((cow[i])->sign)==1)
        {
            pro+=((cow[i])->m)*1.0/2;
            
        }

       

   }
   
}
float Farm::getMilkProduction()
{
    return pro;
}