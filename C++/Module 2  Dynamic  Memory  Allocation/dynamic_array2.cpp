#include <bits/stdc++.h>
using namespace std;
int* get_array(int n){
    //declaring dynamic variable
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << a<< endl;
    return a;
}
int main ()
{
    int n;
    cin >> n;
    int* result= get_array(n);
    //accessing the address of result array postion 2 
    // cout << (result+2);
    for(int i=0;i<n;i++){
        cout << result[i]<< " ";
    }
    return 0;
}