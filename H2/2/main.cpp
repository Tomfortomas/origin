#include <iostream>
#include "Example.h"

using namespace std;

void create_example(int n) {
	
	cout << "--------create_example is ready--------\n";
	
	Example* e[10];
	
	for (int i = 0; i < n; i++)
		e[i] = new Example(i);

	static Example a6(2333);		
	for(int i=0;i<n;i++)
	{
		e[i]->getData();
	}
	for(int i=0;i<n;i++)
	{
		delete e[i];
	}
	
	a6.getData();
	
	cout << "--------create_example is over--------\n";
}

Example a1(23);

int main() {
	
	
	cout << "--------main_function is ready--------\n";

	Example a2(233);
		
	create_example(3);
	
	Example a7(23333);
	a1.getData();
	a2.getData();
	a7.getData();
	cout << "--------main_function is over---------\n";
	
	return 0;
}
