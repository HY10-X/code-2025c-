// 初始化stu数组时,如果在构造函数中处理总分,是不会相加的,因为调用的是默认的构造函数
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxln = 1000;

struct Student
{
    int score;
    string name;
    int rank;
    Student()
    {
    }

    /* data */
};
int cmpscore(Student x, Student y)
{

    return x.score > y.score;
}
int cmpname(Student x, Student y)
{
    return x.name < y.name;
}
int main()
{
    Student stu[maxln];
    int n, stuCount = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // 按考场循环
        int k;
        cin >> k;                   // 输入学生
        for (int j = 0; j < k; j++) // 给第i个考场的每个学生输入信息
        {
            cin >> stu[stuCount + j].name >> stu[stuCount + j].score;
        }
        sort(stu + stuCount, stu + stuCount + k, cmpscore); // 按分数排列好
        stu[stuCount].rank = 1;                             // 第一个考生排名为1

        for (int j = stuCount + 1; j < stuCount + k; j++) // 从第i个考场的第二个学生开始
        // 循环到这个考场的最后一个(第二个考场时,需要加上总人数),挨个赋排名
        {
            if (stu[j].score == stu[j - 1].score)
            {
                stu[j].rank = stu[j - 1].rank; // 分数相同，排名相同
            }
            else
            {
                stu[j].rank = j - stuCount + 1; // 分数不同，排名为当前位置加一
            }
        }

        stuCount += k; // 计算已排名学生总数的方法
    }
    sort(stu, stu + stuCount, cmpname); // 按姓名排序
    for (int i = 0; i < stuCount; i++)
    {
        cout << stu[i].name << " " << stu[i].score << " " << stu[i].rank << endl; // 输出结果
    }
    return 0;
}