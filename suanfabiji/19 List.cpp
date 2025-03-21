#include <bits/stdc++.h>
using namespace std;
void basicnode()
{
    list<int> L1;
    // 添加数据
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    // 遍历,迭代器是被重载过的运算符,支持向前和向后,但不支持随机访问
    for (auto it = L1.begin(); it != L1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // 区间方式构造
    list<int> L2(L1.begin(), L2.end());
    for (auto it = L1.begin(); it != L1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // 拷贝构造
    list<int> L3(L2);
    for (auto it = L1.begin(); it != L1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // n个elem
    list<int> L4(10, 1000);
    for (auto it = L4.begin(); it != L4.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

/// @brief 链表遍历
/// 创建一个节点结构,id是数组编号,next存储下一个数字的编号,data存储数据
struct node
{
    int next, data;
} nodes[1000];
void listbianli()
{

    int n, first, id, data, next;
    cin >> n >> first;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> data >> next;
        nodes[id].data = data;
        nodes[id].next = next;
    }
    int i = first;
    // 将循环条件从 ​判断下一个节点是否存在 改为 ​直接判断当前节点是否存在，确保所有节点（包括最后一个）都能进入循环体
    for (int i = first; i != -1; i = nodes[i].next)
    {
        if (i != first)
        {
            cout << endl;
        }
        cout << i << " " << nodes[i].data << " " << nodes[i].next;
    }
}
/// @brief 链表结点个数
struct node2
{
    int data, next;
} nodes2[10000];
void nodecount()
{
    int n, first, data, next, itemp;
    cin >> n >> first;
    for (int i = 0; i < n; i++)
    {
        cin >> itemp >> data >> next;
        nodes2[itemp].data = data;
        nodes2[itemp].next = next;
    }
    int count = 0;
    for (int i = first; i != -1; i = nodes2[i].next)
    {
        count++;
    }
    cout << count;
}

/// @brief 链表头插法 22点40分
struct Node3
{
    int data, next;
} nodes3[1000];
void nodeheadinsert()
{
    int n, m, first, itemp, data, next;

    cin >> n >> first;
    for (int i = 0; i < n; i++)
    {
        cin >> itemp >> data >> next;
        nodes3[itemp].data = data;
        nodes3[itemp].next = next;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> itemp >> data;
        nodes3[itemp].data = data;
        nodes3[itemp].next = first;
        first = itemp;
    }
    for (int i = first; i != -1; i = nodes3[i].next)
    {
        if (i != first)
        {
            cout << endl;
        }
        cout << i << " " << nodes3[i].data << " " << nodes3[i].next;
    }
}
/// @brief 链表删除元素
struct Node4
{
    int data, next;
} nodes4[1000];

void deletenode()
{
    int n, first, k, tempi, tempdata, tempnext, tempdelid;
    cin >> n >> first >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> tempi >> tempdata >> tempnext;
        nodes4[tempi].data = tempdata;
        nodes4[tempi].next = tempnext;
    }
    // 定义双指针,指向当前元素(current)与上一个元素(last),默认从第一个元素开始
    int current = first, last = -1;
    while (current != -1)
    {

        if (nodes4[current].data == k)
        {
            // 头节点进行特殊处理
            if (current == first)
            {
                // 将头指针给下一个
                first = nodes4[current].next;
                // 将当前指针也给下一个
                current = nodes4[current].next;
                // 处理上一个不存在的-1节点避免溢出
                last = -1;
            }
            // 处理非头节点的删除
            else
            {
                // 处理上一个节点,将当前节点的上一个节点,指向当前节点的下一个节点
                nodes4[last].next = nodes4[current].next;
                // 将当前节点置为下一个节点
                current = nodes4[current].next;
            }
        }
        // 处理不需要删除的节点, 主要是将当前指针后移, 并且将
        else
        {

            last = current;
            current = nodes4[current].next;
        }
        // cout<<first;
    }
    // 指定新链表的头节点
    current = first;
    while (current != -1)
    {
        if (current != first)
        {
            cout << endl;
        }
        cout << current << " " << nodes4[current].data << " " << nodes4[current].next;
        current = nodes4[current].next;
    }
}
struct Node
{
    int data, next;
} nodes5[1000];
/// @brief 链表反转
void reverselist()
{
    int n, tdata, tnext, first, tempi;
    cin >> n >> first;
    int pcurrent, pnext;
    for (int i = 0; i < n; i++)
    {
        cin >> tempi >> tdata >> tnext;
        nodes[tempi].data = tdata;
        nodes[tempi].next = tnext;
    }
    int current = first, plast = -1;
    while (current != -1)
    {
        // 暂存遍历的下一个节点,为了第四步
        pnext = nodes[current].next;
        // 将当前节点反转
        nodes[current].next = plast;
        // 将当前节点设为上一位
        plast = current;
        // 将下一位节点设为当前节点
        current = pnext;
    }

    current = plast;
    while (current != -1)
    {
        if (current != plast)
        {
            cout << endl;
        }
        cout << current << " " << nodes[current].data << " " << nodes[current].next;
        current = nodes[current].next;
    }
}

/// @brief 链表去除重复元素
void removedounode()
{
    int n, first;
    cin >> n >> first;
    int current = first, pnext;

    for (int i = 0; i < n; i++)
    {
        int id, data, next;
        cin >> id >> data >> next;
        nodes[id].data = data;
        nodes[id].next = next;
    }

    /// 使用hashmap记录data出现的次数
    int tempdata[1000]{0};
    int ptempdata, plast = -1;
    while (current != -1)
    {

        if (tempdata[nodes[current].data] != 0)
        {
            ptempdata = nodes[current].data;
            tempdata[ptempdata]++;

            // 删除当前节点
            nodes[plast].next = nodes[current].next;
            // 删除节点,下一个节点后的前驱plast应该还是plast,而不能是当前节点
            plast = plast;
        }
        else
        {
            ptempdata = nodes[current].data;
            tempdata[ptempdata]++;
            // 记录当前节点的上一个元素
            plast = current;
        }

        // 将当前节点后移
        current = nodes[current].next;
    }
    current = first;
    while (current != -1)
    {
        if (current != first)
        {
            cout << endl;
        }
        /// 循环输出
        cout << current << " " << nodes[current].data << " " << nodes[current].next;
        current = nodes[current].next;
    }
}
/// @brief 升序链表中位数
void uplistmid(){
    int n, first;
    cin >> n >> first;
    int current = first, pnext;

    for (int i = 0; i < n; i++)
    {
        int id, data, next;
        cin >> id >> data >> next;
        nodes[id].data = data;
        nodes[id].next = next;
    }
    
}
int main()
{
    removedounode();
}