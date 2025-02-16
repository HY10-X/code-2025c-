#include <iostream>
#include <unordered_map>
#include <string.h>
const int maxln = 100000;
int hashTable[maxln] = {0};
int S1[maxln], S2[maxln];
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> S1[i];
        hashTable[S1[i]]++;
        /* code */
    }
    int firstflag = 1;//未输出第一个元素
    for (int i = 0; i < m; i++)
    {
        cin >> S2[i];

        if (hashTable[S2[i]])
        {
            //遇到复合的元素,先判断,是第一个数就不输出空格
            if (firstflag ==0)
            {
                cout << " ";
            }

            cout << S2[i];
            firstflag = 0;
        }
    }

    return 0;
}