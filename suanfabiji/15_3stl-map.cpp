#include <iostream>
#include <map>
using namespace std;
/// @brief map-赋值与遍历
void for_map()
{
    map<char, int> mp;
    int n, x;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> x;
        mp[c] = x; // 存储
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
/// @brief map的查询
void map_find()
{
    map<char, int> mp;
    int n, k;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // 插入键值对
        cin >> c >> k;
        mp[c] = k;
    }
    cin >> c;
    map<char, int>::iterator it1 = mp.find(c);
    if (it1 == mp.end())
    {
        cout << "-1";
    }
    else
    {
        cout << it1->second;
    }
}
/// @brief 删除指定键
void map_erase()
{

    map<char, int> mp;
    int n, val;
    char key, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> key >> val;
        mp[key] = val;
    }
    cin >> k;
    mp.erase(k);
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it != mp.begin())
        {
            cout << endl;
        }

        cout << it->first << " " << it->second;
    }
}
/// @brief map-clear与size
void mpa_Clear_Size()
{
    map<char, int> mp;
    int n, val;
    char key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> key >> val;
        mp[key] = val;
    }
    cout << mp.size();
    mp.clear();
    cout<<" ";
    cout << mp.size();
}
int main()
{
    mpa_Clear_Size();
}