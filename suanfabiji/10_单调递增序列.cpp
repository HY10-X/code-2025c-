#include <iostream>
using namespace std;
int main()
{

    int n, i, j, k, flag=1,brea=0;
    int a[100];
    i = 0;
    j = 0;
    k = 0;
    cin >> n;
    while (i < n)
    {

        cin >> a[i];
        i++;
    }


    //n-1为了避免比较的最后一位数组越界
    for (j = 0; j < n-1; j++)
    {
        if (brea==1)
        {
            break;
            /* code */
        }
        // a[j]
        for (k = j + 1; k < n; k++)
        {
            if (a[j] <= a[k])
            {
                continue;
            }
            else
            {
                //cout << "NO";
                flag = 0;
                brea=1;
                break;
            }
        }
        
        
    }
    if (flag != 0)
    {
        /* code */
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}