#include <iostream>
#include <string.h>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        cout << "我的小鲤鱼";
        /* code */
    }
    else
    {
        cout << "抱着";
        print(n - 1);
        cout << ("的我");
    }
}
int main()
{
    int n;
    cin >> n;
    cout<<"吓得我抱起了";
    print(n);
    
    return 0;
}