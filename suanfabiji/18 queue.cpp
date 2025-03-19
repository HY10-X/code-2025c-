#include <bits/stdc++.h>
using namespace std;

/// @brief 模拟队列操作
void opqueue()
{
    queue<int> q;
    int n, k;
    string str;
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> temp;
            q.push(temp);
        }
        else
        {
            if (q.front())
            {
                cout << q.front();
                q.pop();
            }
            else
            {
                cout << "-1";
            }
        }
        if (str == "pop")
        {
            cout << endl;
        }
    }
}
void sumqueue()
{
    queue<int> q;
    int tempin, tempoutfirst, tempoutsecond;
    int n, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tempin;
        q.push(tempin);
    }
    while (q.size() != 1)
    {

        tempoutfirst = q.front();
        q.pop();
        tempoutsecond = q.front();
        q.pop();
        sum = tempoutfirst + tempoutsecond;
        q.push(sum);
    }
    cout << sum;
}
/// @brief 约瑟夫环-队列
/// 在每次循环中，我们先让前个人出队列并重新入队列，这样就模拟了报数的过程。然后，第个人出队列并输出其编号，表示这个人离开圈子。
void JonhsfRing()
{
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }
    while (!q.empty())
    {
        if (q.size() != n)
        {
            cout << " ";
        }
        for (int i = 0; i < k; i++)
        {

            if (i == k - 1)
            {
                cout << q.front();
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
    }
}

void optwoqueue()
{
    queue<int> q1, q2;
    int n, count = 0, temp1, temp2, temp3;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1;
        q1.push(temp1);
    }
    while (cin >> temp2)
    {
        q2.push(temp2);
    }
    while ((!(q1.empty())) && (!(q2.empty())))
    {

        if (q1.front() == q2.front())
        {
            q1.pop();
            q2.pop();
        }
        else
        {
            temp3 = q2.front();
            q2.pop();
            q2.push(temp3);
        }
        count++;
    }
    cout << count;
}
int main()
{
    optwoqueue();
}