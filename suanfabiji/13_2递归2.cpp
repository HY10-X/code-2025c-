#include <iostream>
#include <string.h>
using namespace std;
void print(int x)
{
    if (x == 0)
    {
        cout << "讲你妹的故事啊！快点去睡觉！！！"<<endl;
    }
    else{
         cout << "从前有座山，山上有座庙" << endl
         << "庙里有一个老和尚和一个小和尚" << endl
         << "睡前老和尚给小和尚讲故事：" << endl;
         print(x - 1);
         cout<<"然后老和尚和小和尚就睡觉啦"<<endl;
    }
   
    
}
int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}