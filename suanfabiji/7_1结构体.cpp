#include <string.h> // 必须包含头文件
#include <iostream>
#include <math.h>
using namespace std;
struct Point{
    int x,y;
    Point(){

    }
    Point(int a,int b){
        x=a;
        y=b;
    }

};

int main()
{
    int a,b,c;
    cin >> a>>b;
    Point point(a,b);
    cout<<point.x<<" "<<point.y;
    return 0;
}