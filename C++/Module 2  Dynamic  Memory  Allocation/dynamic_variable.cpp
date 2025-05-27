#include <bits/stdc++.h>
using namespace std;
int *p;
void fun (){
   int * x = new int;
   *x = 10;
   p = x;
   cout << "Fun ---> " <<  *p <<endl; //online compiler Fun ---> 10
   return;

}
int main (){
    fun();
    cout << "Main ---> " <<  *p <<endl; //online compiler Main ---> 10
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int *p;
void fun (){
   int x = 100;
   p = &x;
   cout << "Fun ---> " <<  *p <<endl; //online compiler Fun ---> 10
   return;

}
int main (){
    fun();
    cout << "Main ---> " <<  *p <<endl; //online compiler Main ---> 0
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main (){
    int *p = new int;
    *p = 100;
    cout << *p <<endl;
    return 0;
}
*/