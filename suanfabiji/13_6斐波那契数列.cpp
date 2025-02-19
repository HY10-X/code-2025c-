#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int n;
int fbn(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        
       return fbn(n-1)+fbn(n-2);
    }
}
int main()
{

    cin >> n;

    cout << fbn(n);

    return 0;
}