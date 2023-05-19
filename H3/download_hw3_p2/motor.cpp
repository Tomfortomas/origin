#include "motor.h"
void Motor::sell()
{
    cout<<"A motor is sold!"<<endl;
}
Motor::Motor(int num,string name,string type):Vehicle(num,name,type)
{

    

}
void Motor::describe()
{
    cout<<"A motor with "<<w.get_num()<<" wheels and a "<<e.get_name()<<" engine."<<endl;
}