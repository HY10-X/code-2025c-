#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

/// @brief 迷宫可行路径数
// 读取迷宫大小n,m,以及迷宫初始布局maze数组
const int maxln = 5;
int n, m, maze[maxln][maxln];
// 对访问过的节点进行记录
bool visited[maxln][maxln]{false};
// 定义路径计数器
int counter = 0;
const int MAXD = 4;
int dx[MAXD] = {0, 0, 1, -1};
int dy[MAXD] = {1, -1, 0, 0};
/// @brief  检测下一个点的合理性,是否在边界内,是否可以通过,是否访问过
/// @param x
/// @param y
/// @return
bool isvalid(int x, int y)
{
    // 首先检查边界
    bool valid = false;
    if (x >= 0 && x < n && y >= 0 && y < n)
    {
        // 检查是否可以访问
        if (maze[x][y] == 0)
        {
            // 检查是否访问过
            if (visited[x][y] == false)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
/// @brief 从起点开始深度搜索,左上角
/// @param x
/// @param y
void mapDFS(int x, int y)
{
    // 如果第一个点下一个点是终点,说明访问到了终点,路是通的,方式+1
    if (x == n - 1 && y == m - 1)
    {
        counter++;
        return;
    }
    visited[x][y] = true;
    // 按照四个方向依次遍历,分别是i=0,dx[0]=0,dy[0]=1,向右走到最深,一个方向不通就走下一个方向
    for (int i = 0; i < MAXD; i++)
    {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        // 如果下一个节点能走,就再走下下个节点
        if (isvalid(nextX, nextY))
        {
            mapDFS(nextX, nextY);
        }
    }
    // 回溯：在递归调用返回后，将当前点标记为未访问，以便其他路径可以使用该点。
    visited[x][y] = false;
}
void DFS1()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            maze[i][j] = temp;
        }
    }
    mapDFS(0, 0);
    cout << counter;
}

int main()
{
    DFS1();
}
// 64 位输出请用 printf("%lld")