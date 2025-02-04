#include <iostream>
using namespace std;
int main()
{
    int j, k = 0;
    int a[100];
    cin >> j;

    for (int i = 0; i < j; i++)
    {
        cin >> a[i];
    }
    // 冒泡
    ////读取出一个数字a[i]
    for (int i = 0; i < j; i++)
    {

        // 数字a[i]挨个比较,遇到第一个小的,交换位置
        //continue,继续读取第二个数组,如果小了继续交换位置
        for (int l = 0; l < j; l++)
        {
            if (a[i] < a[l])
            {
                int temp;
                temp = a[i];
                a[i] = a[l];
                a[l] = temp;
                continue;
            }
            
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << a[i];
        if (i != j - 1)
        {
            cout << " ";
        }
    }
    return 0;
}
