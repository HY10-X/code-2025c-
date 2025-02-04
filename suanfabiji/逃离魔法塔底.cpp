#include <iostream>
using namespace std;
int main()
{
    int n, u, d, sum, count;
    sum = 0;
    count = 0;
    cin >> n >> u >> d;
    do
    {
        if (sum + u >= n)
        {
            count++;
            break;
        }
        sum = sum + u - d;
        count++;
    } while (sum < n);
    cout << count;
    return 0;
}
