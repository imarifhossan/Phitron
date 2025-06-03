#include <bits/stdc++.h>
using namespace std;
int main (){
    //for character
    char st[10]="Hello";
    char st2[10]="Gello";
    if(strcmp(st,st2)==0){
        cout << "Same"<< endl;
    }
    else {
        cout << "Not same"<< endl;
    }

    //for string
    string s= "Hello";
    string s2= "Gello";
    //string compare
    if(s==s2){
        cout << "Same"<< endl;
    }
    else {
        cout << "Not same"<< endl;
    }
    return 0;
}
