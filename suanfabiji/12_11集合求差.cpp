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
    for (int i = 0; i <n; i++)
    {
        cin>>S1[i];
        hashTable[S1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin>>S2[i];
        if (hashTable[S2[i]])
        {
            hashTable[S2[i]]=0;
        }
        
        
    }
    int status=1;
    for (int i = 0; i < maxln; i++)
    {

        if (hashTable[i]==1)
        {

            if (status!=1)
            {
                cout<<" ";
            }
            
            cout<<i;
            status=0;
        }
        
    }
    
    
    


    return 0;
}