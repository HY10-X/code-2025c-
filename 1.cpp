#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    int size=0;
    do {
    a = getchar();

    if(a==' '){
        size=0;
    }
    else{
        size ++;
    }
    }while (a !='\n');
    //计入了\n需要减去一个
    cout<<size-1;
}