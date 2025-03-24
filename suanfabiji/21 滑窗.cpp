#include <bits/stdc++.h>
using namespace std;
// 滑动窗口最大值 |滑动窗口| 已更新https://sars2025.blog.csdn.net/article/details/134029422
int main()
{
    int N;
    cin >> N;
    // 初始化arr大小为N的数组
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // 输入窗口
    int M;
    cin >> M;
    // 定义窗口的值
    int windows_sum = 0;
    // 计算初始化窗口和
    for (int i = 0; i < M; i++)
    {
        windows_sum += arr[i];
    }
    int max_sum = windows_sum; // 初始化最大和为初始窗口和

    for (int i = M; i < N; i++)
    {
        // 更新新的窗口和,减去前窗口的第一个元素并加上最新的元素
        windows_sum = windows_sum + arr[i] - arr[i - M];
        max_sum = max(max_sum, windows_sum);
    }
    cout << max_sum << endl;
}