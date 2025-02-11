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
   Student student(string str, int sc1,int sc2){
        name=str;
        chscore=sc1;
        mascore=sc2;
   }
};
int comparesc1(Student x, Student y)
{
    if (x.chscore==y.chscore)
    {
        /* code */
        return x.name<y.name;
    }
    else{
        return x.chscore>y.chscore;
    }
    
}
int comparesc2(Student x, Student y)
{
    if (x.mascore==y.mascore)
    {
        /* code */
        return x.name<y.name;
    }
    else{
        return x.mascore>y.mascore;
    }
    
}
int main()
{
    int n = 0,k=1;
    cin >> n;
    cin>>k;
    Student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name>>stu[i].chscore>>stu[i].mascore;
    }
  if (k==1)
  {
    // 规则1
    sort(stu,stu+n,comparesc1);
  }
  else{
    //规则2
    sort(stu,stu+n,comparesc2);
  }
   

    for (int i = 0; i < n; i++)
    {
        cout<< stu[i].name<<" "<<stu[i].chscore<<" "<<stu[i].mascore<<endl;
        
    }

    return 0;
}