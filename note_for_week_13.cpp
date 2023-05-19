#include <iostream>
#include<iomanip>
using namespace std;
// namespace A{
//     int x;
//     int hi;

// }
// namespace B{
//     char x;
//     char hi;

// }
// int main()
// {
//     {using namespace A;
//     x=7;}
//     using namespace B;
//     x='a';
//     using std::cout;

//     cout<<x;
// }
using std::string;

int main()
{
    string s0("hello");
    string s2(s0,2,2);//中间：从2开始，右边：截取两个字符
    string s3("hello,world",6);
    string s4(10,'x');
    string s5(s0.begin(),s0.begin()+2);
    const char *p = s0.c_str();
    //str.size(),查询长度，或str.length()，等价，size函数的设置目的是为了兼容vector的求长度方法
    //str.empty()，查询是否为空
    //str.clear(),清空
    //迭代访问：for(char c:str)
    //三种输入方式：
    //1. cin >>读到空格
    //2. getline(cin,str);读到换行
    //3. getline(cin,str,'$');读到指定的空格符，甚至可以读到换行符
    //string可按照字典序比较大小
    //to_string可以把数字变成字符串，但是不会把表达式直接变成字符串，而是先计算出值，浮点数会保留小数点后六位
    //stoi、stod可以反之转为数字类型
    //<iomanip>cout的格式化输出
    cout<<setprecision(2)<<3.14159;
    int a;

    cin>>a;
    cout<<a<<endl;
    //ifstream ifs("input.txt");
    //while(ifs)重载了bool
    //
}
//正则表达式：^[a-z0-9_]{3,15}$
//^表示开始 $表示结束 []里面是规则，a-z 0-9和_，大括号里面是字符长度
//正则表达式三种模式：匹配、搜索、替换
//c++中是<regex>
//想要表示转义字符可以使用\\或R
//regex_match(s,re)可以看s是否可以匹配re
/*
regex re("sub.*");
smatch sm;
string s("string");
//sm可以储存捕获的内容
*/
