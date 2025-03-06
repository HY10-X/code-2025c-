#include <iostream>
#include <queue>
using namespace std;
/// @brief priority_queue-push与top
void priority_queue_push()
{

    priority_queue<int> q;
    int n, m, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    cout << q.top();
}
/// @brief priority_queue-pop与empty
void priority_queue_pop()
{

    priority_queue<int> q;
    int n, m, temp, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    for (int i = 0; i < k; i++)
    {
        q.pop();
    }
    if (q.empty())
    {
        cout << "empty priority queue";
    }
    else
    {
        cout << q.top();
    }
}
/// @brief 使用q.size()函数输出q中的元素个数。
void priority_queue_size()
{

    priority_queue<int> q;
    int n, m, temp, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    for (int i = 0; i < k; i++)
    {
        q.pop();
    }
    cout << q.size();
}
/// @brief priority_queue-优先级
void priority_queue_youxianji()
{
    // 定一个一个最小优先队列
    // 第一个参数代表队列数据类型,
    // 第二个参数代表底层容器,一般都是vector
    // 第三个参数代表比较器,优先队列默认最大优先(less<t>),优先规则为父节点大于子节点
    // 使用 greater<T>定义比较器
    priority_queue<int, vector<int>, greater<int>> q;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    cout << q.top();
}
/// @brief priority_queue-结构体
struct Fruit
{
public:
    string name;
    int price;
    Fruit(string name_, int price_)
    {
        this->name = name_;
        this->price = price_;
    }
    Fruit() {
        this->name="";
        this->price=0;
    }
    // 定义重载<操作
    bool operator<(const Fruit &other) const
    {
        return this->price > other.price;
    }
};
void priority_queue_struct()
{
    priority_queue<Fruit> q;
    int n;
    Fruit temp("", 0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.name >> temp.price;
        q.push(temp);
    }
    cout << q.top().name <<" "<< q.top().price;
}
int main()
{
    priority_queue_struct();
}