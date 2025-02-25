#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxln = 10;
int cnt[maxln];
int main()
{
   for (int i = 0; i < maxln; i++)
   {
      cin >> cnt[i];
   }
   bool isZero = true;// 结果是否为0,需要先考虑所有数字全是0的情况
   for (int i = maxln - 1; i >= 0; i--) // 倒序输出
   {
      // if (i>0&&cnt[i]>0)
      if (i > 0 && cnt[i] > 0) // 如果1-9中存在大于0的个数,
      {
         isZero = false;
      }
      if (!isZero)
      { // 只要有一位数大于0,就说明组合出来的数不可能是0,这种情况逐行输出
         for (int j = 0; j < cnt[i]; j++)
         {
            cout << i;
         }
      }
   }
   if (isZero)
   {
      cout << 0;
   }

   return 0;
}