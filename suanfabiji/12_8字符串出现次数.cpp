#include <iostream>
#include <unordered_map>
#include <string.h>
const int maxln = 26 * 26 * 26;
int hashTable[maxln] = {0};
char str[1000];
using namespace std;

int getHashkey(char s[])
{
    return (s[0] - 'A') * 26 * 26 + (s[1] - 'A') * 26 + (s[2] - 'A');
}
int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        hashTable[getHashkey(str)]++;
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>str;
        cout<<hashTable[getHashkey(str)];
        if (i<m-1)
        {
            cout<<" ";
            /* code */
        }
        
    }
    

    return 0;
}