#include <iostream>
#include <unordered_map>
#include<string.h>
const int maxln = 100000;
int hashTable[maxln] = {0};
int getasc(char x){
    return x-'a';
}
using namespace std;
int main()
{
    char s1[maxln],s2[maxln];

    cin>>s1;
    int n=strlen(s1);
    for (int i = 0; i < n; i++)
    {
        hashTable[getasc(s1[i])]++;

    }
    cin>>s2;
    int m = strlen(s2);
    //输入第二行,输出结果
    for (int i = 0; i < m; i++)
    {
        if (hashTable[getasc(s2[i])]>0)
        {
            //cout<< hashTable[getasc(s2[i])];
            cout<<1;
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