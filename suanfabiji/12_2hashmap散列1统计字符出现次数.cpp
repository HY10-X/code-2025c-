#include <iostream>
#include <unordered_map>
#include <string.h>
const int maxln = 101;
int hashTable[maxln] = {0};
char str[maxln];
// desc:获取字母的字典序,0-25
int getHashKey(char c)
{
    return c - 'a';
}
using namespace std;
int main()
{
    cin>>str;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        hashTable[getHashKey(str[i])]++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        // 如果该字符在hashtable中的值大于0,输出
        if (hashTable[getHashKey(c)])
        {
            cout << c << " " << hashTable[getHashKey(c)] << endl;

            /* code */
        }
    }

    return 0;
}