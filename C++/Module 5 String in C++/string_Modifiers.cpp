#include <bits/stdc++.h>
using namespace std;
int main (){
    string s = "Hello";
    string s2 = "World";
    // concatenate two string

    // s+=s2; 
    // s.append(s2);

    // cout << s << endl; //Hello World
    // now s = "Hello World"
    
    //it add a single character end of the string 
    // s.push_back('A');

    //remove the last element
    s.pop_back();
    cout << s << endl; //Hell
    s.pop_back();
    cout << s << endl;//Hel
    s.pop_back();
    cout << s << endl;//He
    s.pop_back();
    cout << s << endl;//H
       s.pop_back();
    cout << s;//
    
    //or we can use this, difference  you can insert multiple character now  s+="String" or s.append("String")
    // s+="A"; 
    // s+=" Bangladesh"; //Hello World Bangladesh
    //  s.append("A");
    //  s.append(" Bangladesh");
    // cout << s << endl; 

    //adding 
    // s[0]='G'; //we can do this even the string current size we can change any of the character but we can not add something in any index which is greater or equal to the size because in this way we can not increase the array size
    // s[5]='P';//not working
    // s[6]='P'; //not working
    // cout << s << endl; 
    return 0;
}
