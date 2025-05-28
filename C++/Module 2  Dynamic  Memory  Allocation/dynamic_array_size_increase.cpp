#include <bits/stdc++.h>
using namespace std;
int main (){
    int *a =new int[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    int* b  =  new int[5];
    for(int i=0;i<3;i++){
        b[i] = a[i];
    }
    b[3]=400;
    b[4]=50;
    delete [] a; //as its an array we have to mention that when we are trying to delete it, if its not an array for variable simply we can say delete a;
    for(int i=0;i<3;i++){
        cout << b[i] << " ";
    }
    return 0;
}


//Static array size increasing (after array size increasing we can not delete the static array a-It's a waste of memory)

/*
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    int b[5];
    for(int i=0;i<3;i++){
        b[i] = a[i];
    }
    b[3]=40;
    b[4]=50;

    for(int i=0;i<5;i++){
        cout << b[i] << " ";
    }
    return 0;
}
*/