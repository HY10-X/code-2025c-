#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/// @brief min(a,b)
void fmin()
{
    int a, b;
    int cl;
    cin >> a >> b;
    cl = min(a, b);
    cout << cl;
}
/// @brief algorithm头文件之max函数
void fmax()
{
    int a, b;
    int cl;
    cin >> a >> b;
    cl = max(a, b);
    cout << cl;
}
/// @brief algorithm头文件之abs函数
void fabs()
{
    int a, b;
    int cl;
    cin >> a;
    cl = abs(a);
    cout << cl;
}
/// @brief algorithm头文件之swap函数
void fswap()
{
    int a, b;
    int cl;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}
/// @brief algorithm头文件之reverse函数 容器
void freverse()
{
    int a, b;
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it != v.begin())
        {
            cout << " ";
        }

        cout << *it;
    }
}
/// @brief algorithm头文件之reverse函数 string
void freverse2()
{
    int a, b;
    string s;
    int n;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}
/// @brief algorithm头文件之next_permutation函数
void fnext_permutation()
{
    vector<int> v;
    int n, temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        v.push_back(temp);
    }
    do
    {
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
            if (it != v.begin())
            {
                cout << " ";
            }

            cout << *it;
        }
        cout << endl;
        // 当没有循环到v.end()时,继续循环
    } while (next_permutation(v.begin(), v.end()));
}
/// @brief algorithm头文件之fill函数
void stl_fill()
{
    int a[100];
    int n, k;
    cin >> n >> k;
    fill(a, a + n, k);
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        cout << a[i];
    }
}

/// @brief algorithm头文件之fill函数2:二维数组的初始化和遍历,仍然是二维数组的起始地址与结束地址
void stl_fill2()
{
    int a[3][5];
    int k;
    cin >> k;
    fill(&a[0][0], &a[0][0] + 3 * 5, k);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << a[i][j];
        }
        cout << endl;
    }
}
/// @brief algorithm头文件之sort函数I
void stl_sort()
{
    int n, temp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i != v.begin())
        {
            cout << " ";
        }

        cout << *i;
    }
}
bool cmp(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/// @brief algorithm头文件之sort函数II,定义比较函数倒序排列
void stl_sort2()
{
    int n, temp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i != v.begin())
        {
            cout << " ";
        }

        cout << *i;
    }
}

/// @brief algorithm头文件之sort函数III
void stl_sort3()
{
    int n;
    string temp;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i != v.begin())
        {
            cout << endl;
        }

        cout << *i;
    }
}
// algorithm头文件之sort函数IV,结构体的比较
struct Node
{
    int x, y;
    Node(int tx, int ty)
    {
        this->x = tx;
        this->y = ty;
    }
};
bool cmp1(Node a, Node b)
{
    if (a.x!=b.x)
    {
        return a.x<b.x;
    }
    else{
        return a.y<b.y;
    }
    
}
void stl_sort4()
{
    vector<Node> v;
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        Node temp(a, b);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp1);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i != v.begin())
        {
            cout << endl;
        }
        cout << (*i).x << " " << (*i).y;
    }
}
/// @brief algorithm头文件之lower_bound函数
///二分查找,lower_bound---“下界”的定义——即值域范围内的最小点,该函数返回第一个最小值的地址
void stl_lower_bound(){
    int n,k;
    int a[10];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //函数返回的是地址
    int *pos=lower_bound(a,a+n,k);
    int position=pos-(&a[0]);
    cout<<position+1;
}
/// @brief algorithm头文件之upper_bound函数
///二分查找,upper_bound---“上界”的定义——即值域范围内的最大点,该函数返回大于指定元素的位置
void stl_upper_bound(){
    int n,k;
    int a[10];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //函数返回的是地址
    int *pos=upper_bound(a,a+n,k);
    int position=pos-(&a[0]);
    cout<<position+1;


}
int main()
{
    stl_upper_bound();
}