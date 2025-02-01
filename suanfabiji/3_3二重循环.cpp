#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <=n-j+1; i++)
        {

            cout << i;
            if (i!=n-j+1)
            {
               cout<<" ";
            }
            
            
        }
        if (j != n)
        {
            cout << endl;
        }
    }

    return 0;
}