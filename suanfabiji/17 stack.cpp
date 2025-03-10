#include <iostream>
#include <stack>
using namespace std;
/// @brief 栈的操作序列
void stack_op()
{
    stack<int> s;
    int n, x;
    string opr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> opr;
        if (opr == "push")
        {

            cin >> x;
            s.push(x);
        }
        else
        {
            if (s.empty())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
}
/// @brief 合法的出栈序列
void stack_pop()
{
    int n;
    cin >> n;
    stack<int> s;
    int x, NowMax = 0; // nowMax记录了当前已经压入栈的最大值
    bool isValid = true;
    for (int i = 0; i < n; i++)
    {
        cin >> x; // 取出栈队列第一个元素
        if (x > NowMax)
        {
            for (int j = NowMax + 1; j <= x; j++)
            {
                s.push(j);
            }
            NowMax = x;
        }
        if (s.top() != x)
        {
            isValid = false;
            break;
        }
        else
        {
            s.pop();
        }
    }
    if (isValid==true)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
/// @brief 可能的出栈序列
void may_pop_stack(){

}
int main()
{
    stack_pop();
}