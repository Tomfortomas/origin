//模板的复习：
#include <iostream>
using namespace std;
template<class T>
T add(T a, T b)
{
    return a+b;
}
template <typename T>
class A
{
    public:
    T data;
};
// int main()
// {
//     A<int> a;
//     cout<<add(1,2);
// }
//命名空间：避免大规模程序设计过程中出重名，控制标识符的作用域,std中包含了标准C++库中所有内容
//定义命名空间：
namespace A1{
    int x,y;
}
namespace A2{
    int x,y;
}
int main()
{
    A1::x = 3;
    A2::x = 4;
    cout<<A1::x<<endl;
}
//STL:四个部分，算法、容器、函数、迭代器，都是基于模板编写
//STL:pair容器
template<class T1,class T2>
struct pair{
    T1 first;
    T2 second;
};
//或者使用make_pair
auto t =std::make_pair("abc",7.8);//可以自动推导数据类型
//tuple容器：强化的pair，可以插入任意数量的参数，配合tie函数来赋值
//用get函数获取元组的元素
auto v0 = std::get<0>(t)//t是元组变量，但是注意，取下标需要在编译时确定，必须是常量
//vector:push_back,pop_back,erase,insert(x.begin()+1,5)
//std::vector<int> x;
//vector<int>::iterator iter
//x.begin()和x.end()返回的都是迭代器，注意end返回的是最后一个元素之后的元素的迭代器，与begin构成左闭右开区间
//iter的使用与指针相同
//直接遍历：for(auto & x:vec)
//迭代器失效：所指向空间的数据改变，在遍历的时候增加元素，可能导致迭代器失效
//list:底层实现是双向链表
//push_front, push_back
//list不支持下标访问，但是插入与删除，插入与删除不影响迭代器
//set:不重复元素构成的无序集合，即与插入顺序无关，顺序由大小排序决定
//map:由两个数据项组成，可以通过下标访问
//map[key] = T;没有的话就创建

