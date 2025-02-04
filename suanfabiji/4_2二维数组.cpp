#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int a[10][10];
    int i,j,k;
    cin>>n>>m;


    for(i=0;i<n;i++){

        for(j=0;j<m;j++){

            cin>>a[i][j];

        }
        
    }
    for(i=0;i<n;i++){

        for(j=0;j<m;j++){

           cout<<a[i][j];
           if (j<m-1)
           {
            cout<<" ";
           }
           
        }
        cout<<endl;
    }
    return 0;
}
