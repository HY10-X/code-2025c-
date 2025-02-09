#include <iostream>
#include <algorithm>
#include <string.h>
const int maxln = 50;
int n, k, i, j,maxmin;
int a[maxln];

using namespace std;
void insertarr()
{
    for (int i = 0; i < n; i++)
    {
        // 标记已分组的第一个元素,也可以随着循环更新已分组的最大值下标
        maxmin = i;
        // 第一个元素不用和自己比较所以+1
        for (int j = i + 1; j < n; j++)
        {
            // 和简单选择排序的区别就是,选择排序分两组直接交换,不断挑最小的放前面
            // 插入排序将将未排序的最小元素找出来,再找出来和已排序部分的最后一个交换
            if (a[j] < a[maxmin])
            {
                maxmin = j;
            }
        }
        swap(a[i],a[maxmin]);
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
    insertarr();
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }

    return 0;
}