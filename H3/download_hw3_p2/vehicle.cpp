#include "vehicle.h"
Vehicle::Vehicle(int num,string engine):e(engine),w(num)
{
   
    cout<<"Finish building a vehicle with "<<num<<" wheels and a "<<engine<<" engine."<<endl;
        
}
Vehicle::Vehicle(int num,string engine,string type):e(engine),w(num)
{
   
    cout<<"Finish building a "<<type<<" with "<<num<<" wheels and a "<<engine<<" engine."<<endl;
        
}

void Vehicle::describe()
{ 
    cout<<"A vehicle with "<<w.get_num()<<" wheels and a "<<e.get_name()<<" engine."<<endl;
}