#include <iostream>
#include <unordered_map>
#include<string.h>
const int maxln = 100000;
int hashTable[maxln] = {0};
using namespace std;
int main()
{
    int x,y;
    int n , m ;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        hashTable[x]++;

    }
    //输入第二行,输出结果
    for (int i = 0; i < m; i++)
    {
        cin>>y;
        
        if (hashTable[y]>0)
        {
            cout<< hashTable[y];
        }
        else
        {
            cout<<0;
        }
        
        if (i<m-1)
        {
            /* code */
            cout<<" ";
        }
        
        
       
       


    }
    

    return 0;
}