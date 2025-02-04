#include <iostream>
#include <string.h>
using namespace std;
const int maxln = 10000;
char str[maxln];
int main()
{
    int x;
    cin.getline(str, maxln);
    x = strlen(str);
    cout << x;
    return 0;
}