#include <iostream>
#include <unordered_map>
const int maxln = 101;
int hashTable[maxln] = {0};
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        hashTable[x]++;
    }
    for (int i = 0; i <= 100; i++)
    {
        if (hashTable[i])
        {
            cout << i <<" "<<hashTable[i];
            /* code */
        }
    }

    return 0;
}