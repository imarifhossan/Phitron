#include <bits/stdc++.h>
using namespace std;
int main (){
    //without space
    string s = "Hello";
    
    cout << s[0]<<endl;//H
    
    cout << s.at(0)<<endl;//H
    cout << s.at(3)<<endl;//l
    
    cout << s.front()<<endl;//H
    
    cout << s.back()<<endl;//o
    cout << s[s.size()-1]<<endl;//o
    
    return 0;
}
