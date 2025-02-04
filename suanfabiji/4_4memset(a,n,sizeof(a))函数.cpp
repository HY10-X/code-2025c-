#include <cstring>  // 必须包含头文件
#include<iostream>
using namespace std;
const int maxln=10000;
int a[maxln];
int main(){
    int x;
    cin>>x;
    memset(a,x,sizeof(a));
    cout<<a[0];


    return 0;
}