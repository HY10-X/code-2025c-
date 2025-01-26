#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   /*整型int
   范围是-2的三十一次到2的三十一次-1
   从-2147483648到2147483647
    int a;
    cin>>a;
    cout<<a;
    */
/*********************************************************/
    /*长整型
    范围是-2的六十三次到2的六十三次-1
    long a;
    cin>>a;
    cout<<a;
     */
/*********************************************************/
    /*浮点数
    小数点
    保留小数点可以使用printf("%.2f",a) 
    也可以使用iomanip的fixed函数设定固定小数点格式，使用setprecision(设置保留小数点位数)
    
    float a;
    cin>>a;
    cout<<fixed<<setprecision(2)<<a<<endl;
    printf("%2f",a);
    */
/*********************************************************/
   /*字符型
    char a;
    cin>>a;
    cout<<a;
    */
/*********************************************************/
/* endl 和/n
    int a;
    int b;
    cin>>a>>b;
    cout<<a<<endl<<b;
*/
/*********************************************************/
/*强制类型转换*/
    /*
    int a;
    int b;
    cin>>a>>b;
    //错误,将a/b的结果整型转为浮点
    //cout<<(a/b)<<endl<<double(a/b);
    cout<<(a/b)<<endl<<fixed<<setprecision(2)<<(double(a)/double(b));
    
    */
/*********************************************************
    //定义常量
    const float pai=3.14;
    double r;
    cin>>r;
    //iomanip fixed setprecision
    cout<<fixed<<setprecision(2)<<(pai*r*2);*/
/*********************************************************/
    /*//自增
    int a;
    cin>>a;
    cout<<++a;
    */
/*********************************************************/
    return 0;
}