#include<iostream>
using namespace std;
int main(){

    int N,count=0;
    cin>>N;
    while (N!=1)
    {
        if (N%2==0)
        {
            N=N/2;
        }
        else{
            N=(N*3+1)/2;
        }
        count++;
        /* code */
    }
    cout<<count;


 

    return 0;
}