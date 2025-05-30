#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    char s;
    cin >> s;
    int b;
    cin >> b;
    if(s=='<'){
       if(a<b){
        cout << "Right";
       }
       else {
        cout << "Wrong";
       }
    }
    if(s=='>'){
       if(a>b){
        cout << "Right";
       }
       else {
        cout << "Wrong";
       }
    }
    if(s=='='){
       if(a==b){
        cout << "Right";
       }
       else {
        cout << "Wrong";
       }
    }
    return 0;
}