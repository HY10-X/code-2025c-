#include <iostream>
using namespace std;
const int maxln=1000000;
int a[maxln];
int main()
{
    int n,i,j,k;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout<<a[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    return 0;
}
