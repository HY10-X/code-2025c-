#include<iostream>
#include<string.h>
using namespace std;

struct Student
{
   int id;
   char name[15];
   //构造Student类型的成员变量使用的同名构造函数
    Student(int _id,char _name[15]){
        _id=id;
        _name=name;
    }

};

int main(){
    int iid;
    char iname[15];
    cin>>iid;
    getchar();
    cin.getline(iname,16);
    Student student(iid,iname);
    
    cout<<student.id<<student.name;
    return 0 ;
}