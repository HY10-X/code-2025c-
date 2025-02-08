#include <string.h> // 必须包含头文件
#include <iostream>
#include <math.h>
using namespace std;
int increase(int x)
{
    x++;
    return x;
}
int max2(int a, int b)
{

    return max(a, b);
}
int max3(int a, int b, int c)
{
    int temp1,temp2,temp;
    int maxnum[3] = {a, b, c};
    
    temp1=max2(maxnum[0],maxnum[1]);
    temp2=max2(maxnum[0],maxnum[2]); 
    temp=max2(temp1,temp2);
    return temp;
}
int main()
{
    int a,b,c;
    cin >> a>>b>>c;
    cout << max3(a,b,c);
    return 0;
}