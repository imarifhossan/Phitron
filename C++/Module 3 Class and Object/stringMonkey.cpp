#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    string s;
    while (getline(cin,s)){
    sort(s.begin(),s.end());
    int slength= s.length();
    for(int i=0;i<slength;i++){
        if(s[i]!=' '){
           cout << s[i];
        }
    }
    cout << endl;
    }
    
    return 0;
}
