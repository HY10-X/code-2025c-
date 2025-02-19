#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int n;
int nxn(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // n!相当于n*(n-1)!,而n-1阶乘就是nxn(n-1)
        return n * nxn(n - 1);
    }
}
int main()
{

    cin >> n;

    cout << nxn(n);

    return 0;
}