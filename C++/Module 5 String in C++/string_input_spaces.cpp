#include <bits/stdc++.h>
using namespace std;
int main (){
  
   /*
    char s[100];
    cin.getline(s,100); 
   */
    int x;
    cin >> x;//10
    string s;
    // cin>> s;
    cin.ignore();
    getline(cin,s);//take input with space

    cout << x << endl;//10
    cout << s << endl;
    return 0;
}


//If we use cin before for taking an integer , and after we use getline than the second string with space will be ignored if we do not use here cin.ignore();
