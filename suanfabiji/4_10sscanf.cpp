#include <cstring> // 必须包含头文件
#include <iostream>
using namespace std;
const int maxln = 10000;
char str[maxln];
int main()
{
    int x, y, z;
    cin.getline(str, 50);
    if (sscanf(str, "%d is greater than %d", &x, &y) == 2)
    {
        switch (x > y)
        {
        case 1:
            cout << "Yes";
            break;
        case 0:
            cout << "No";
            break;
        default:
            cout << "error";
            break;
        }
    }
    else if (sscanf(str, "%d is equal to %d plus %d", &x, &y, &z) == 3)
    {
        switch(x==z+y){
            case 1:
            cout<<"Yes";
            break;
            case 0:
            cout<<"No";
            break;
            default:
            break;
        }
    }
    else{
        cout << "???";
    }

    return 0;
}