#include <iostream>
#include<math.h>
using namespace std;
int n,a[1000];
int findmax(int x){
    if(x==0){
        return a[0];
    }
    else{
        return max(findmax(x-1),a[x]);
    }

}
int main()
{
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
    cout<<findmax(n);

    return 0;
}