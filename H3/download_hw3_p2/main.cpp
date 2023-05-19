
#include <iostream>
#include <string>
#include "wheel.h"
#include "engine.h"
#include "vehicle.h"
#include "motor.h"
#include "car.h"
using namespace std;

int main() {
	int n, type, num;
	string engine;
	freopen("G:\\2022-2023_spring\\oop\\H3\\download_hw3_p2\\out.txt","w",stdout);
	cin >> n; 
	for (int i=0; i<n; i++) {
		cin >> type >> num >> engine;
		switch (type) {
			case 0: {
				Vehicle v = Vehicle(num, engine);
				v.describe();
				break;
			}
			case 1: {
				Motor m = Motor(num, engine);
				m.describe();
				m.sell();
				break;
			}
			case 2: {
				Car c = Car(num, engine);
				c.describe();
				break;
			}
		}
	}
	fclose(stdout);
	return 0;
}