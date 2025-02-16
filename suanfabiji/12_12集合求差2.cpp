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
    }
    for (int i = 0; i < m; i++)
    {
        cin >> S2[i];
        if (hashTable[S2[i]])
        {
            hashTable[S2[i]]--;
        }
    }
    int status = 1;
    for (int i = 0; i < maxln; i++)
    {
        int num = hashTable[i];

        if (hashTable[i])
        {

            if (status != 1)
            {
                cout << " ";
            }
            for (int j = 0; j < num; j++)
            {
                cout << i;
                if (j < num - 1)
                {
                    cout << " ";
                }
            }

            status = 0;
        }
    }

    return 0;
}