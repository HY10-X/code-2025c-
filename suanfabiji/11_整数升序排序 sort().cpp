#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 50;
int a[maxln];
int compare(int x, int y)
{

    return x > y;
}
int main()
{
    int n = 0;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // 升序
    // sort(a,a+n);
    // 降序
    sort(a,a+n,compare);
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