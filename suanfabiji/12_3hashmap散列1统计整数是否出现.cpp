#include <iostream>
#include <unordered_map>
#include<string.h>
const int maxln = 100000;
bool hashTable[maxln] = {false};
using namespace std;
int main()
{
    int x,y;
    int n , m ;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        hashTable[x]=true;

    }
    //输入第二行,输出结果
    for (int i = 0; i < m; i++)
    {
        cin>>y;
        
        if (hashTable[i]!=true)
        {
            cout<<"1";
        }
        if (i<m-1)
        {
            /* code */
            cout<<" ";
        }
        
        
       
       


    }
    

    return 0;
}