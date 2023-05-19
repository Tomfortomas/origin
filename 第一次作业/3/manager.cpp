#include "manager.h"
#include <iostream>
Manager::Manager():Chef("aca","cacsa")
{

}


void Manager::newChef(Chef a)
{
    chef[num]=new Chef("aca","cacsa");
    *chef[num] = a;
    this->num++;
}
void Manager::order(string dish)
{
    for(int i=0;i<num;i++)
    {
        if((*(chef+i))->isSignatureDish(dish)==1)
        {
            (*(chef+i))->cook(dish);
            return ;
        }
    }
    (chef[0])->cook(dish);
}
void Manager::order(string dish, int chefId )
{
   (*(chef+chefId))->cook(dish);
}
Manager::~Manager()
{
    ;
}