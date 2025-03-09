#include <iostream>

using namespace std;
/// @briefpair-make_pair、first与second
void pair_make_pair()
{
    string str;
    int k;
    pair<string, int> p;
    cin >> str >> k;
    // 使用make_pair函数创建pair
    p = make_pair(str, k);
    cout << p.first << " " << p.second;
}
/// @brief pair-比较
void pair_compare()
{
    pair<int, int> p1, p2;
    int k1, k2, k3, k4;
    cin >> k1 >> k2;
    cin >> k3 >> k4;
    p1 = make_pair(k1, k2);
    p2 = make_pair(k3, k4);
    if (p1 < p2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    pair_compare();
}