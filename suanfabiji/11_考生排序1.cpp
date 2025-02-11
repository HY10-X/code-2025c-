#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 50;
string a[maxln];

struct Student
{
   string name;
   int score;
   Student student(string str, int sc){
        name=str;
        score=sc;
   }
};
int comparesc(Student x, Student y)
{
    if (x.score==y.score)
    {
        /* code */
        return x.name<y.name;
    }
    else{
        return x.score>y.score;
    }
    
}
int main()
{
    int n = 0;
    cin >> n;
    Student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name>>stu[i].score;
    }
  
    // 降序
    sort(stu,stu+n,comparesc);

    for (int i = 0; i < n; i++)
    {
        cout<< stu[i].name<<" "<<stu[i].score<<endl;
        
    }

    return 0;
}