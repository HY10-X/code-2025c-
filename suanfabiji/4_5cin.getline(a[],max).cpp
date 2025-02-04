#include <cstring> // 必须包含头文件
#include <iostream>
using namespace std;
const int maxln = 10000;
char a[maxln];
int main()
{
    int x;
    //cin.getline(a, 50);错误getline会给\0存在最后一位,只能存50-1个数据
    cin.getline(a, 51);
    cout << a;

    return 0;
}