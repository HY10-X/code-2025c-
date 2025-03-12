#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<cmath>
using namespace std;

int main() {
    string s16;
    cin>>s16;
    int sq=0;
    int x=0;
    int temp;
    //左闭右开
    s16.erase(s16.begin(),s16.begin()+2);
    //倒叙遍历字符串,end是换行,所以-1
    for (auto it = s16.end()-1; it!=s16.begin()-1; it--)
    {
        //转换字母
        if((*it)>='A'&&(*it)<='F'){
            temp=10+(*it-'A');
        }
        //转换数字
        else{
            temp=*it-'0';
        }
        x=x+temp*(pow(16,sq));
        //cout<<*it;
        sq++;
    }
    cout<<x;
    
}
// 64 位输出请用 printf("%lld")