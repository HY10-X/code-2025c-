#include <iostream>
using namespace std;
int main()
{
    int n, u, d, sum,count;
    sum=0;
    count=0;
    cin >> n >> u >> d;
    do
    {
        if(sum+5>=d){
            count++;
            break;
        }
        sum=sum+u-d;
        count++;
    } while (sum < n);
    cout<<count<<sum;
    return 0;
}
