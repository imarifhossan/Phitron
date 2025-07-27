#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int flag=0;
    while (ss >> word){
        if(word=="Jessica"){
            flag++;
        }
    }
    if(flag>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
