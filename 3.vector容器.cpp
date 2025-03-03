#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
void PrintVector(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}
// vector数据结构与数组类似,称为单端数组,尾插法插入数据
// vector可以动态扩展
// vector容器的迭代器支持随机访问的迭代器

void test01()
{
    // 1默认构造
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);

    // 2通过区间的方式构造
    vector<int> v2(v1.begin(), v1.end());
    // 3通过n个elem的方式构造,10个100
    vector<int> v3(10, 100);
    // 4拷贝构造
    vector<int> v4(v3);
}
/// @brief vector赋值
void test02()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    // 1直接等于容器赋值
    vector<int> v2;
    v2 = v1;
    // 2assign方式赋值,左开右闭区间
    vector<int> v3;
    v3.assign(v2.begin(), v2.end());
    // 3 n个elem,十个100赋值
    vector<int> v4;
    v4.assign(10, 100);
}
/// @brief 容器的容量和大小操作
void test03()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);
    if (v1.empty()) // 为真代表容器为空
    {
        cout << "v1为空";
        /* code */
    }
    else
    {
        cout << "v1不为空";
        cout << "v1容量" << v1.capacity(); // v1容量,容量是大于等于大小的
        cout << "v1大小为" << v1.size();
    }

    // 重新指定大小,如果重新指定过长,默认用0填充新位置
    v1.resize(15);
    // resize的重载,利用指定默认的填充值
    v1.resize(15, 100);
    PrintVector(v1);
    // 如果重新指定的比原来短了,超出的部分会删除掉
}
/// @brief vector的插入和删除
void test04()
{

    vector<int> v1;
    // 尾插
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    PrintVector(v1);
    // 尾删
    v1.pop_back();
    PrintVector(v1);
    // 插入,第一个参数是迭代器
    v1.insert(v1.begin(), 100);
    // 重载版本插入,插入2个1000进入容器
    v1.insert(v1.begin(), 2, 1000);
    // 删除,第一个参数也是迭代器
    v1.erase(v1.begin());
    // 清空
    v1.clear();
    // 以及erase
    v1.erase(v1.begin(), v1.end());
}
/// @brief vector的数据存取
void test05()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    // 利用[]方式访问容器中的元素
    for (int i = 0; i < v1.size(); i++)
    {
        /* code */
        cout << v1[i] << " ";
    }
    cout << endl;
    // 利用@访问元素
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;
    //获取第一个元素,与最后一个元素
    cout<<v1.front();
    cout<<v1.back();
}
/// @brief vector容器互换
void test06(){
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVector(v1);
    vector<int>v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    cout<<"交换前";
    PrintVector(v2);
    cout<<"交换后";
    v1.swap(v2);
    
    
}
int main()
{
    test01();
    return 0;
}
