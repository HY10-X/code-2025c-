#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int n;
string str;
string loopchar(int n)
{
    if (n == 1)
    {
        return str.substr(0, 1);
    }
    else
    {
        return str.substr(n-1,1) + loopchar(n - 1);
    }
}
int main()
{

    cin >> str;

    cout << loopchar(str.length())<<endl;

    return 0;
}