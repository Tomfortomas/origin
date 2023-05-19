#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    T c = a + b;
    return c;
}

template<typename T>
T subtract(T a, T b){
    T c = a - b;
    return c;
}

int main(){
   
    int d = add<int>(1, 1.2); // (4)
    cout<<d;
    return 0;
}
