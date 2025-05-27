#include <bits/stdc++.h>
using namespace  std;
//as we are trying to return an array and array is one kind of pointr so wee have to use here pointer
int* fun (){
    // int a[5];
    int *a =new int[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    return a; //in this line array cleaned up and within this line everything is deleted from the stack memory
}
int main ()
{
    int* x=fun ();//does  not return anything for static array
     for(int i=0;i<5;i++){
        cout << x[i]; // print th  array when its dynamic
    }
    return 0;
}