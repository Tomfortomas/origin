#include "car.h"
Car::Car(int num, string name,string type):Vehicle(num,name,type)
{

}
void Car::describe()
{
    cout<<"A car with "<<w.get_num()<<" wheels and a "<<e.get_name()<<" engine."<<endl;
}