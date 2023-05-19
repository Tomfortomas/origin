#include <iostream>
#include "Example.h"

using namespace std;


int Example::num=1;
Example::Example(int data) {
	cout<<"Example #"<<num<<" is created"<<endl;
	this->data=data;
	this->my_num=num;
	num++;
	
}

void Example::getData() {
	cout<<"The data of Example #"<<my_num<<" is "<<data<<endl;
}

Example::~Example() {
	cout<<"Example #"<<my_num<<" is destroyed"<<endl;
}