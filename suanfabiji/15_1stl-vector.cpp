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
    int n, x, k1, k2, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> x >> k1 >> k2;
    // insert第一位应该是位置,迭代器的开始一位
    v.insert(v.begin() + k1, x);
    v.erase(v.begin() + k2);
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i;
        if (i != v.end() - 1)
        {
            cout << " ";
        }
    }
}
/// @brief vector比较
void cmpVector()
{
    vector<int> v1;
    vector<int> v2;
    int n, m, temp;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        v2.push_back(temp);
    }
    if (v1 < v2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
/// @brief vector数组
void shuzu()
{
    vector<int> vs[10];
    int n, ki, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ki;
        for (int j = 0; j < ki; j++)
        {
            cin >> temp;
            vs[i].push_back(temp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (vector<int>::iterator it = vs[i].begin(); it != vs[i].end(); it++)
        {
            cout << *it;
            if (it != vs[i].end() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
/// @brief 二维vector
void erwei()
{
    int n,k,temp;
    cin >> n;
    // 定义第一个vector<int>类型的容器存放n个vector<int>的容器
    vector<vector<int>> vs(n, vector<int>());
    // 迭代器也要是vs一个类型的<vector<int>>
    for (vector<vector<int>>::iterator iw = vs.begin(); iw != vs.end(); iw++)
    {
        cin>>k;
        for (int i = 0; i < k; i++)
        {
            cin>>temp;
            (*(iw)).push_back(temp);
        }
    }
     for (vector<vector<int>>::iterator iw = vs.begin(); iw != vs.end(); iw++)
    {
        for (vector<int>::iterator in=(*(iw)).begin();in != ((*(iw)).end());in++)
        {
            cout << *in;
            if (in != ((*(iw)).end()) - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    erwei();
}