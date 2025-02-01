#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// desc:不满两位数的日期补足0
string fullwithzero(int tempnum)
{
    string stringnum;
    if (tempnum <= 9 && tempnum >= 0)
    {
        // 使用to_string转换int
        stringnum = "0" + to_string(tempnum);
        /* code */
    }
    else
    {
        stringnum = to_string(tempnum);
        return stringnum;
    }
    return stringnum;
}
int main()
{
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
    /***********条件运算**********************************************/
    /*
       int a,b;
       cin>>a>>b;
       if (a>=b)
       {
           cout<<"A"<<" >= "<<"B";
       }
       else{
           cout<<"A"<<" < "<<"B";
       }
       */

    /***************************日期类型输入输出************************/
    /*
    int YYYY;
    int MM;
    int DD;
    int HH;
    int MI;
    int SS;
    scanf("%d-%d-%d %d:%d:%d", &YYYY, &MM, &DD, &HH, &MI, &SS);
    cout << YYYY << endl
         << fullwithzero(MM) << endl
         << fullwithzero(DD) << endl
         << fullwithzero(HH) << endl
         << fullwithzero(MI) << endl
         << fullwithzero(SS);
        */
    /***************************getchar()************************/
    /*getchar()读取多余换行符
    int n;
    char c;
    cin>>n>>c;
    //或者使用scanf()但是需要getchar()读取多余的回车
    cout<<n+1<<endl<<c;
    */
    /***************************函数***********************
   double d;
   cin>>d;
   //floor向上取整,ceil()
    cout<<fixed<<setprecision(2)<<fabs(d)<<" "<<fixed<<setprecision(0)<<floor(d)<<" "<<fixed<<setprecision(0)<<ceil(d)<<" "<<fixed<<setprecision(0)<<d<<" "<<fixed<<setprecision(2)<<pow(d,5);
    */
    double d;
    cin >> d;
    cout <<fixed<<setprecision(2)<< sqrt(d) <<" "<<fixed<<setprecision(2)<<log(d);
    return 0;
}
