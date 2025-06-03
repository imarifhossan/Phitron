#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countAnton=0,countDanik=0;
    for(auto it=s.begin();it<s.end();it++){
        if(*it =='A'){
           countAnton++;
        }
        else{
            countDanik++;
        }
    }
    if(countAnton>countDanik){
        cout <<"Anton";
    }
    else if (countDanik>countAnton){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}