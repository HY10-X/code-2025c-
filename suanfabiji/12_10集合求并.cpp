#include <iostream>
#include <unordered_map>
#include <string.h>
const int maxln = 100000;
int hashTable[maxln] = {0};
int S1[maxln], S2[maxln];
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    { 
        /* code */
        cin>>S1[i];
        hashTable[S1[i]]++;
       
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin>>S2[i];
        hashTable[S2[i]]++;
    }
    int firstflag=0;
    for (int i = 0; i < maxln; i++)
    {
        /* code */
        if (hashTable[i]>0)
        {
            if (firstflag==1)
            {
                 cout<<" ";
            }
            
          
            
            cout<<i;

           firstflag=1;
        }
        if (i<maxln-1)
        {
           
            /* code */
        }
        
        
        
    }
    
    
    
    return 0;
}