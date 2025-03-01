#include <iostream>
#include <vector>
using namespace std;

/// @brief // 尾插法
void vpb()
{
    vector<int> v;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    vector<int>::iterator i = v.begin();
    while (i != v.end())
    {
        cout << *i;
        i++;
        if (i < v.end())
        {
            cout << " ";
        }
    }
}
/// @brief vector初始化
void initvecttor()
{
    int n, temp, k;
    cin >> n >> k;
    vector<int> v(n, k);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
}

/// @brief vector删除元素与size()容量方法
void popback()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    vector<int>::iterator i = v.begin();
    for (int i = 0; i < k; i++)
    {
        v.pop_back();
    }
    cout << v.size();
}
/// @brief 清空容器
void clearvector()
{
    int n;
    vector<int> v(n, 0);
    v.clear();
    cout << v.size();
}
// vector的插入和删除
void indevector()
{
    vector<int> v;
    int n, x, k1, k2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> x >> k1 >> k2;
    // insert第一位应该是位置,迭代器的开始一位
    v.insert(v.begin() + k1, x);
    v.erase(v.begin() + k2);
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i;
        if (i != v.end())
        {
            cout << " ";
        }
    }
}
int main()
{
    indevector();
}