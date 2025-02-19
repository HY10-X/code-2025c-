#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int n;
int upFloor(int i)
{
   if (i<=1)
   {
    return 1;
   }
   else{
    //一次只能上一节或两节,所以到达第n个台阶的方式数等于到达n-1台阶的方式数与n-2方式数之和
    return upFloor(i-1)+upFloor(i-2);
   }
   
}
int main()
{

    cin >> n;
    cout<<upFloor(n);

    return 0;
}