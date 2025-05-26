#include <iostream>
#include <algorithm> //for min max and swap
using namespace std;
int main ()
{
    int x,y;
    cin >> x>>y; //50 100
    // if(x>y){
    //     cout << x<< endl;
    // }
    // else  {
    //     cout  << y <<  endl;
    // }
    cout << min (x,y) <<endl;
    cout << max (x,y) <<endl;
    cout << min ({1,2,3,-50,5})<<endl;
    swap(x,y);
    cout <<x<<" "<<y <<endl; //100 50
    return 0;
}