#include <iostream>
#include <algorithm>
#include <string.h>
const int maxln = 50;
int n, k, i, j;
int a[maxln];

using namespace std;
void swaparr()
{
    for (int i = 0; i < n; i++)
    {
        // a[i]
        // 从i开始都是没分类的,将j赋给k,记录未分类的下标
        k = i;
        for (int j = k; j < n; j++)
        {
            //在本轮循环中选出最小的值a[k]
            if (a[k]>a[j])
            {
                //如果有最小的就去拿最小的向后继续遍历比较
                k = j;
            }
        }
        swap(a[i], a[k]);
    }
}
int main()
{
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swaparr();
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i<n-1)
        {
            cout<<" ";
        }
        
    }

    return 0;
}