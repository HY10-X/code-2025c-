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
    // sort(a, a + n, cmp1);
    // 插入排序
    for (int i = 0; i < n; i++)
    {
        int focus = a[i];
        int j = i;
        // 当没有到头并且比较元素的前一位比比较元素大时进行循环,

        while (j - 1 >= 0 && a[j - 1] < focus)
        {
            a[j] = a[j - 1];
            j--;
        }
        // 找到插入的值j-1,因为循环体已经有了j--
        a[j] = focus;
    }

    int samecount=1;
    for (int i = 0; i < n; i++)
    {
        if (i+1<n&&a[i]==a[i+1])
        {
            
            samecount++;
            /* code */
        } 
        else{

            for (int j = 0; j < samecount; j++)
            {
                cout<<a[i]<<" "<<i+1<<endl;
            }
            samecount=1;
            
        }
        
    }

    return 0;
}