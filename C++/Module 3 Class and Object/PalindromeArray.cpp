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
    int i=0,j=n-1;
    int palindrome = 0;
    while(i<j){
      if(a[i]!=a[j]){
        palindrome=1;
      }
      i++;
      j--;
    }
    if(palindrome==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}