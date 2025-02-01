#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int a=0;
    int sum=0;
    cin>>n;
    /*while (a!=n)
    {
        a++;
       sum=sum+a;
    }*/
   /*
   do
   {
    a++;
    sum=sum+a;
   } while (a!=n);
   */
  for ( a = 1; a <= n; a++)
  {
    sum=sum+a;
  }
  
    cout<<sum;



    return 0;
}