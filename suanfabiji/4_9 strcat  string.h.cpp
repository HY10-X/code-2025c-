#include <iostream>
#include <string.h>
using namespace std;
const int maxln = 10000;
char str1[maxln];
char str2[maxln];
int main()
{
    int x;
    cin.getline(str1, maxln);
    cin.getline(str2, maxln);
    strcat(str1,str2);
    cout<<str1;
    //cout << str1 << str2;
    return 0;
}