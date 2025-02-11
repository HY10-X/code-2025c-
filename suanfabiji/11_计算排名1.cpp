// 初始化stu数组时,如果在构造函数中处理总分,是不会相加的,因为调用的是默认的构造函数
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 1000;
int a[maxln];
int cmp1(int x, int y)
{
    return x > y;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    sort(a, a + n, cmp1);
    int rank[n], tempdata = 0;
    for (int i = 0; i < n; i++)
    {

        if (i - 1 >= 0&&a[i - 1] == a[i])
        {
            rank[i] = rank[i - 1];
            tempdata++;
        }
        else
        {
            tempdata++;
            rank[i] = tempdata;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << rank[i] << endl;
    }

    return 0;
}