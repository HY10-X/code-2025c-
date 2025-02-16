#include <iostream>
#include <unordered_map>
#include<string.h>
const int maxln = 100000;
int hashTable[maxln] = {0};
using namespace std;
int main()
{
    char s1[maxln],s2[maxln];

    cin>>s1>>s2;
    int n=strlen(s1);
    int m = strlen(s2);
    for (int i = 0; i < n; i++)
    {
        hashTable[s1[i]]=1;

    }
    for (int i = 0; i < m; i++)
    {

        cout<<hashTable[s2[i]];
         if (i<m-1)
        {
            /* code */
            cout<<" ";
        }
        /* code */
    }

    return 0;
}