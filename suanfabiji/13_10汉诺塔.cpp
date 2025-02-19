#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int n;
/// @brief /将n个圆盘从source借助auxiliary移动到distinnation
/// @param n
/// @param source
/// @param auxiliary
/// @param destination
/// @return
void moveHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1) // 只有一个时
    {
        cout << source << "->" << destination << endl;
        return;
    }
    else
    {
        // 将n-1个圆盘从原柱子移到b辅助柱子
        moveHanoi(n - 1, source, destination, auxiliary);
        // 将最大的移到目标柱子
        cout << source << "->" << destination << endl;
        // 将n-1从辅助柱子移到目标柱子
        moveHanoi(n - 1, auxiliary, source, destination);
    }
}
int main()
{

    cin >> n;
    cout << (pow(2, n) - 1) << endl;
    moveHanoi(n, 'A', 'B', 'C');
    return 0;
}