#include <bits/stdc++.h>
using namespace std;
int main (){
    string s = "Hello";
    //iterating from string 0 index to last index
    // for(int i=0;i<s.size();i++){
    //     cout << s[i] <<endl;
    // }
    
    /*
    cout << *s.begin() << endl; //as its a pointer we need to dereference it
    cout << *s.end() << endl; //returns null because it point the last element of the string , and as we know in string last position there is null character \0
    cout << *(s.end()-1) << endl; //o

    */

    //using iterator where it is the name which is necessary
    // for(string::iterator it=s.begin();it<s.end();it++){
    //   cout << *it << endl;
    // }


    //auto detects is it string or something 11 version+(available function), 
    for(auto it=s.begin();it<s.end();it++){
      cout << *it << endl;
    }
    
    return 0;
}
