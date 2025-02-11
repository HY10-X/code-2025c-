#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 50;
string a[maxln];
int compare(string x, string y)
{

    return x > y;
}
int main()
{
    int n = 0;
    cin >> n;
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
        cout << a[i]<<endl;
        
    }

    return 0;
}