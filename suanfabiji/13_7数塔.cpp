#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
const int maxn = 20 + 1;
int n, a[maxn][maxn], f[maxn][maxn];
/// @brief 计算塔顶为第i行第j列时此塔的最大值
/// @param i 
/// @param j 
/// @return max
int getMax(int i, int j)
{
    //i代表当前塔顶在哪一行,n表示塔的当前行数
    if (i == n)//如果是最下面一行,数塔只有一个元素
    {
        return a[n][j];//返回它本身
    }
    else//如果不是最后一行
    {
        //分别计算左下角节点和右下角节点作为塔顶时的结果,挑选最大的那个返回
        return max(getMax(i + 1, j), getMax(i + 1, j + 1))+a[i][j];
    }
}
int main()
{

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }

        /* code */
    }

    cout << getMax(1, 1);
    return 0;
}