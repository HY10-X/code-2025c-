#include <string.h> // 必须包含头文件
#include <iostream>
#include <math.h>
using namespace std;
void swap(int *a, int *b)
{
    //将a的地址存入指针*a中,同时把地址给temp
   int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b,c;
    cin >> a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}