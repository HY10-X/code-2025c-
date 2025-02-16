#include <iostream>
#include <unordered_map>
#include <string.h>
const int maxln = 100000;
int a[maxln], hashTable[1000001] = {0};
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hashTable[a[i]] = true;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        //判断k-a[i],求j是否存在
        if (k - a[i] >= 0 && hashTable[k - a[i]])
        {
            ans++;
            /* code */
        }
    }

    cout << ans / 2;

    return 0;
}