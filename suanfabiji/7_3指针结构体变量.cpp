#include <iostream>
#include <string.h>
using namespace std;
// 结构体指针类型
struct Node
{
    int id;

    // 定义
    Node* left;
    Node* right;
    // 默认构造函数
    Node() {}
    // 带参数的构造函数
    Node(int _id, Node *_left, Node *_right)
    {
        id = _id;
        left = _left;
        right = _right;
    }
};

int main()
{
    
    int id1, id2, id3;
    cin >> id1 >> id2 >> id3;
    //Node tempnode(1,nullptr,nullptr);
    Node node1(id1, NULL, NULL);
    Node node2(id2, NULL, NULL);
    Node node3(id3, &node1, &node2);
    cout <<node3.left->id <<" "<< node3.right->id;
    return 0;
}