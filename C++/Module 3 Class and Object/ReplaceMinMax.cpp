#include <bits/stdc++.h>
using namespace std;
int main (){
 int n;
 cin >> n;
 int a[n];
 for(int i=0;i<n;i++){
    cin >> a[i];
 }
 int minimum = INT_MAX;
 int maximum = INT_MIN;
 int minimumIndex = 0;
 int maximumIndex = 0;

 for(int i=0;i<n;i++){
    if(a[i]<minimum){
       minimum = a[i];
       minimumIndex=i;
    }
    if(a[i]>maximum){
        maximum = a[i];
        maximumIndex = i;
    }
 }

 swap(a[minimumIndex],a[maximumIndex]);

for(int i=0;i<n;i++){
    cout << a[i] << " ";
 }
 return 0;   
}