#include <iostream>
using namespace std;
class t
{
    public:
    string s="strta";
};
int main()
{
    t a, b;
    a=move(b);
    cout<<b.s<<endl;
    cout<<a.s<<endl;
}
