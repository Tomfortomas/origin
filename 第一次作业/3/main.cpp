#include <iostream>
#include <cstdio>
#include <string>
#include "chef.h"
#include "manager.h"
using namespace std;
int main() {
    
    freopen("G:\\2022-2023_spring\\面向对象程序设计\\第一次作业\\3\\sample.in","r",stdin);
    freopen("G:\\2022-2023_spring\\面向对象程序设计\\第一次作业\\3\\my_sample.txt","w",stdout);
    int C, N;
    Manager manager;

    std::cin >> C;
    for (int i = 0; i < C; ++i) {
        std::string name, signatureDish;
        std::cin >> name >> signatureDish;
        manager.newChef(Chef(name, signatureDish));
    }

    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int t, chefId;
        std::string dish;
        std::cin >> t >> dish;
        if (t == 0) {
            manager.order(dish);
        }
        else {
            std::cin >> chefId;
            manager.order(dish, chefId);
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}