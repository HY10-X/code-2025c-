#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxln=100000;
int main()
{
    int n,w[maxln],W;
    cin>>n>>W;
    for (int i = 1; i <= n; i++)
    {
       cin>>w[i];
    }
    sort(w+1,w+n);
    int coweight=0,numco=0;
    for (int i = 1; i <= n; i++)
    {
       
       if (w[i]<=W&&W>=0)
       {
        coweight=w[i]+coweight;
        W=W-w[i];
        numco++;
       }
       
    }
    cout<<numco<<" "<<coweight;
    return 0;
}