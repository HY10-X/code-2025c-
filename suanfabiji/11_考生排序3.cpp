 //初始化stu数组时,如果在构造函数中处理总分,是不会相加的,因为调用的是默认的构造函数
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 50;
string a[maxln];

struct Student
{
    string name;
    int chscore;
    int mascore;
    int totalscore;
    //默认构造函数
    Student(){
        totalscore=0;
    }
    Student(string str, int sc1, int sc2)
    {
        name = str;
        chscore = sc1;
        mascore = sc2;
        totalscore = sc1 + sc2;
    }
};
int comparesc1(Student x, Student y)
{
    if (x.chscore == y.chscore)
    {
        /* code */
        return x.name < y.name;
    }
    else
    {
        return x.chscore > y.chscore;
    }
}
int comparesc2(Student x, Student y)
{
    if (x.mascore == y.mascore)
    {
        /* code */
        return x.name < y.name;
    }
    else
    {
        return x.mascore > y.mascore;
    }
}
int comparesc3(Student x, Student y)
{
    if (x.totalscore == y.totalscore)
    {
        /* code */
        return x.name < y.name;
    }
    else
    {
        return x.totalscore > y.totalscore;
    }
}
int main()
{
    int n = 0, k = 1;
    cin >> n;
    cin >> k;
    //初始化stu数组时,如果在构造函数中处理总分,是不会相加的,因为调用的是默认的构造函数,此时调用的是默认构造函数,
    //为了避免这种情况,在循环输入无法调用构造函数时应该重新给stu数组赋值或使用构造函数给数组赋值
    Student stu[n];
    for (int i = 0; i < n; i++)
    {
        //在循环里给默认构造函数赋值时,不会调用构造函数,所以导致总分一直没有赋值为空
        cin >> stu[i].name >> stu[i].chscore >> stu[i].mascore;
        stu[i].totalscore=stu[i].chscore+stu[i].mascore;
    }
    if (k == 1)
    {
        // 规则1
        sort(stu, stu + n, comparesc1);
    }
    else if(k==2)
    {
        // 规则2
        sort(stu, stu + n, comparesc2);
    }
    else{
        sort(stu, stu + n, comparesc3);
    }

    for (int i = 0; i < n; i++)
    {
        cout << stu[i].name << " " << stu[i].chscore<<" "<< stu[i].mascore <<" "<<stu[i].totalscore<< endl;
    }

    return 0;
}