#include <iostream>
#include <set>
using namespace std;
/// @brief set容器(集合)的插入与遍历
void stlSet()
{
    set<int> s;
    int n, x, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        // 插入集合
        s.insert(temp);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
        {
            cout << " ";
        }
        cout << *it;
    }
}

/// @brief set.find(x)与erase迭代器
void set_find()
{
    set<int> s;
    int n, x, temp;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    set<int>::iterator iFind = s.find(x);
    if (iFind != s.end())
    {
        // find()未查到数据则返回容器空,erase()入参要删除元素的地址
        s.erase(iFind);
    }

    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
        {
            cout << " ";
        }

        cout << *it;
    }
}
/// @brief erase删除指定元素
void setErase()
{
    set<int> s;
    int n, x, temp;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }

    s.erase(x);
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
        {
            cout << " ";
        }

        cout << *it;
    }
}
/// @brief
void set_clear_size()
{
    set<int> s;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    s.clear();
    cout << s.size();
}
int main()
{

    set_clear_size();
}