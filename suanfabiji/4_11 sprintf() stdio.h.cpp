#include <cstring> // 必须包含头文件
#include <iostream>
using namespace std;
const int maxln = 10000;
char str[maxln];
int main()
{
    int YY,MM,DD,HH,MI,SS;
   cin>>YY>>MM>>DD>>HH>>MI>>SS;
   //0是占位符,4是位宽,不足位数的用0补足
   sprintf(str,"%04d-%02d-%02d %02d:%02d:%02d",YY,MM,DD,HH,MI,SS);
   cout<<str;
    return 0;
}