#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<math.h>
using namespace std;

int main() {
    string s16;
    cin>>s16;
    int sq=0;
    int x=0;
    int temp;
    //左闭右开
    s16.erase(s16.begin(),s16.begin()+2);
    for (auto it = s16.end(); it!=s16.begin(); it--)
    {
        
        if((*it)>='A'&&(*it)<='F'){
            temp=10+(*it-'A');
        }
        else{
            temp=*it;
        }
        x=temp*(pow(16,sq));
        //cout<<*it;
        sq++;
    }
    cout<<x;
    
}
// 64 位输出请用 printf("%lld")