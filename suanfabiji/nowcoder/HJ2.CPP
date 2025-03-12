#include <cctype>
#include <cstdio>
#include <iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int count;
    char temp;
    unordered_map<char, int > hash;
    while ((temp = getchar()) != '\n') {
        if (temp >= 'A' && temp <= 'Z') {
            temp = temp - 'A' + 'a';
        }
        hash[temp]++;
    }
    char tar;
    cin >> tar;
    if (tar >= 'A' && tar <= 'Z') {
            tar = tar - 'A' + 'a';
        }
    cout << hash[tar];
}
