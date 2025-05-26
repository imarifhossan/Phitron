#include <iostream>
#include <iomanip> //for  set precision
using namespace std;
int main (){
    double d = 23.4567;
    double f = 23.45678;
    cout<< d <<endl <<f <<endl; //23.4568
    cout << fixed << setprecision(7) <<f;//how many number we want to print specify here
}