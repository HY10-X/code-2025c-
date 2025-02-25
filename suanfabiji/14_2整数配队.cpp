#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxln = 100000;
int S[maxln], T[maxln];
int n, m, j, i, k, l;
int main()
{
   int count = 0;
   cin >> n >> m;
   for (int i = 0; i < n; i++)
   {
      cin >> S[i];

      /* code */
   }
   for (int i = 0; i < m; i++)
   {
      cin >> T[i];
   }
   sort(S, S + n);
   sort(T, T + m);

   while (i < n && j < m)
   {
      if (S[i] < T[j])
      {
         count++;
         i++;
         j++;
      }
      else
      {
         j++;
      }
   }
   cout << count;

   return 0;
}