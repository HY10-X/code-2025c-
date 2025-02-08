#include <string.h> // 必须包含头文件
#include <iostream>
#include <math.h>
using namespace std;
void increase(int &x)
{
  x++;
}

int main()
{
    int a,b,c;
    cin >> a>>b;
    increase(a);
    cout<<a<<" "<<b;
    return 0;
}