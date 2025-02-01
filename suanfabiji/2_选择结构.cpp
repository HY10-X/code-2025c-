#include <iostream>

using namespace std;
int main()
{
    /*******************************************
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
    */
    /*******************************************
        int n;
         cin>>n;
        if (n<0)
        {
            cout<<"Negative Number";
        }
        else{
        if(n%2==0){
        cout<<"Even Number";
        }
        else{
            cout<<"Odd Number";
        }
        }*/
    int n;
    cin >> n;
    switch (n)
    {
    case 0:
        cout << "Zero";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    default:
        cout << "Greater than 5";
        break;
    }
    return 0;
}