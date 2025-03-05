#include <iostream>
#include <queue>
using namespace std;

/// @brief queue-push、front与back
void queue_Push()
{
    queue<int> q;
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        int temp;
        cin >> temp;
        q.push(temp);
    }
    cout << q.front() << " " << q.back();
}

/// @brief queue-pop与empty
/// 队列前出后进,从前删除元素
void queue_pop()
{
    queue<int> q;
    int n, k;
    int temp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    for (int i = 1; i <= k; i++)
    {
        q.pop();
    }
    if (q.empty())
    {
        cout << "empty queue";
    }
    else
    {
        cout << q.front() << " " << q.back();
    }
}
/// @brief queue-size
void queue_size()
{
    queue<int> q;
    int n, k;
    int temp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    for (int i = 1; i <= k; i++)
    {
        q.pop();
    }
    
    cout << q.size();
    
}
int main()
{
    queue_size();
}