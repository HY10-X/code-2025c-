#include <iostream>
#include <stack>
using namespace std;
/// @brief stack-push与top
void stack_push()
{
    stack<int> s;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push(temp);
    }
    cout << s.top();
}
/// @brief stack-pop
void stack_pop()
{
    stack<int> s;
    int n, temp, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push(temp);
    }
    for (int i = 0; i < k; i++)
    {
        s.pop();
    }
    if (s.empty())
    {
        cout << "empty stack";
    }
    else
    {
        cout << s.top();
    }
}
/// @brief stack-size
void stack_size()
{
    stack<int> s;
    int n, temp, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push(temp);
    }
    for (int i = 0; i < k; i++)
    {
        s.pop();
    }
    cout<<s.size();
}
int main()
{
    stack_size();
}