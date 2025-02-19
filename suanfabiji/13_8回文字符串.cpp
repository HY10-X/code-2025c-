#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
const int maxn = 20 + 1;
string str;
bool isPalindrome(int i, int j)
{
    if (i >= j) // 如果比较越过中间值,它就是回文
    {
        return true;
    }
    else
    {
        return (str[i] == str[j] && isPalindrome(i + 1, j - 1));
    }
}
int main()
{

    cin >> str;
    bool flag = isPalindrome(0, str.length() - 1);
    if (flag)
    {
        cout << "Yes";
        /* code */
    }
    else
    {
        cout << "No";
    }

    return 0;
}