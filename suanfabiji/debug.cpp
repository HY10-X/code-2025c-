#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
using namespace std;
const int maxln = 10000;
const double cmpflo = 1e-8;
int main()
{
    int n, A, B, C, D;
    /*格式控制
    float d;
    char str[maxln];
    cin>>n>>d;
    getchar();
    cin.getline(str,maxln);
    cout<<n<<endl<<fixed<<setprecision(2)<<d<<endl<<str;
    */
   cin>>A>>B>>C>>D;
    double res1 = A * asin(sqrt(B) / 2);
    double res2 = C*asin(sqrt(D)/2);
    double res=res1-res2;
    if (res>cmpflo)
    {
        
        cout<<"1";
        /* code */
    }
    else if(res==cmpflo){
        cout<<"0";
    }
    else{
        cout<<"2";
    }
    
    return 0;
}