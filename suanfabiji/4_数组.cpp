#include <iostream>
using namespace std;
int main()
{
    int j,k=0;
    int a[9];
    cin>>j;
    
   for (int i = 0; i <j ; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i <j ; i++)
   {
    cout<<a[i];
    if(i!=j-1){
        cout<<" ";
    }
   }
    return 0;
}
