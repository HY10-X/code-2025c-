#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
using namespace std;
const int maxln = 10000;
const double cmpflo = 1e-8;
int main()
{
    int a,b,n;
    int inta[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>inta[i];
        inta[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<inta[i];
        if (i<(n-1))
        {
            /* code */
            cout<<" ";
        }
        
    }
  
    



    return 0 ; 
}