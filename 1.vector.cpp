#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/// @brief 供foreach回调,回调函数
/// @param val
void myPrint(int val)
{
    cout << val << endl;
}
/// @brief vector存放内置数据类型
void test01()
{
    // 创建vector容器,数组
    vector<int> v;
    // 向容器中插入数据,尾插法push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // 通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin(); // 起始迭代器,指向容器中的第一个元素
    vector<int>::iterator itEnd = v.end();
    // 第一种遍历方式
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl; // 解引用操作符
        itBegin++;
    }
    // 第二种遍历方式
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *itBegin << endl;
    }
    // 第三种遍历方式
    // 利用stl提供的foreach()算法,#include<algorithm>,Func()
    for_each(v.begin(), v.end(), myPrint);
}
struct Person
{
    string m_Name;
    int m_Age;
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};

/// @brief vector存放自定义数据结构类型
void test02()
{
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 10);
    Person p3("ccc", 10);
    Person p4("ddd", 10);
    Person p5("eee", 10);
    // 向容器中插入数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    // 遍历容器中数据,每个容器都有自己的迭代器xxxx::iterator xxxx
    vector<Person>::iterator it_begin = v.begin();
    vector<Person>::iterator it_end = v.end();
    for (vector<Person>::iterator it = it_begin; it != it_end; it++)
    {
        // 把it迭代器当作指针使用,解出来是个person数据类型的值,使用解引用操作符(*it).或者it->
        // cout << "name:" << (*it).m_Name << "age:" << (*it).m_Age;
        cout << "name:" << it->m_Name << "age:" << it->m_Age;
    }
}
/// @brief 迭代器存放指针类型以及遍历方式
void test03()
{
    // 定义一个person类型的指针v
    vector<Person *> v;
    // 定义五个person对象
    Person p1("aaa", 10);
    Person p2("bbb", 10);
    Person p3("ccc", 10);
    Person p4("ddd", 10);
    Person p5("eee", 10);
    // 将person对象存入v指针
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    // 遍历容器
    for (vector<Person *>::iterator i = v.begin(); i != v.end(); i++)
    { // i代表person*指针的迭代器,可以看作双重指针,
        // 先解一层引用的值就是person指针(*i),取其中的值即可
        // 也可以再解引用一次取(*i)指针的值(*(*i))代表person值
        cout << "name" << (*(*i)).m_Name << "age" << (*i)->m_Age;
    }
}
/// @brief 容器嵌套容器,二维数组类似
void test04()
{
    vector<vector<int>> v;
    // 创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    // 向小容器中添加数据
    for (int i = 0; i < 4; i++)
    {
        /* code */
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }
    // 将小容器插入到大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    //通过大容器遍历所有数据
    for (vector<vector<int>>::iterator it = v.begin(); it!=v.end(); it++)
    {
        //*it是内部的小容器------vector<int>
        for (vector<int>::iterator vit = (*it).begin(); vit!=(*it).end(); vit++)
        {//先寻找小容器的起始和结束
            cout<<*vit<<" ";
        }
        cout<<endl;
        
    }
    
}
int main()
{

    return 0;
}
