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

/// @brief 后缀表达式-无优先级
void toPostfixExpr1(){
    string exp;
    getline(cin,exp);
    string result="";
    result=result+exp[0];
    ///后缀表达式四个符号一组
    for (int i = 2; i < exp.size(); i=i+4)
    {
        //和第一个数添加分隔符
        result+=" ";
        //添加第二个数
        result+=exp[i+2];
        //添加空格
        result+=" ";
        //添加符号
        result+=exp[i];
    }
    cout<<result;
    
}
//!!!!!!待处理
/// @brief 后缀表达式-有优先级
void toPostfixExpr2(){
    string exp;
    getline(cin,exp);
    string result="";
    
    
}
int main()
{
    
}