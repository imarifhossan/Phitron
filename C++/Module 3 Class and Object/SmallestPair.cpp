#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for(int tc=0;tc<t;tc++){
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
   
    int small = INT_MAX;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            int value = a[i]+a[j]+j-i;
            small = min(value,small);
        }
    }
    cout << small<<endl;
    }
    return 0;
}