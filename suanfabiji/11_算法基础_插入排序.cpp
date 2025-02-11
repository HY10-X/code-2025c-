#include <iostream>
#include <algorithm>
#include <string.h>
const int maxln = 50;
int n, k, i, j,maxmin,temp;
int a[maxln];

using namespace std;
void insertarr()
{
    for (int i = 0; i < n; i++)
    {
        //选择比较的元素拿出来
        maxmin=a[i];
        j=i;
        //j-1>0保证前面还有数据推
       while (j-1>=0&&a[j-1]>maxmin)
       {
        //如果被比较的元素(已排序元素)比拿出来的元素值小,将被比较的元素右移,
        //j--逐一一直比到b[j-1]不存在即j-1<0
        a[j]=a[j-1];
        j--;
       }
       //将的拿出来的元素放到计算出的位置j
        a[j]=maxmin;        
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