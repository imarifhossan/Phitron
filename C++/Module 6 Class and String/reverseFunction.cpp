#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;//hello
    //reverse the string
    reverse(s.begin(),s.end());
    cout << s<< endl;//olleh
    return 0;
}

/*
int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}
*/
