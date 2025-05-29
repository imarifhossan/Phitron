#include <bits/stdc++.h>
using namespace std;
int* get_array(int n){
    //declaring dynamic variable
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    return a;
}
int main ()
{
    int n;
    cin >> n;
    int* result= get_array(n);
    cout << result[0];
    // for(int i=0;i<n;i++){
    //     cout << result[i]<< " ";
    // }
    return 0;
}