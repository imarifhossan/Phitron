#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int b[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            b[j]=a[i];
            j++;
        }
    }
    while(j<n){
        b[j]=0;
        j++;
    }
    for(int j=0;j<n;j++){
        cout << b[j]<< " ";
    }
    return 0;
}