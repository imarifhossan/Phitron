#include <iostream>
using namespace std;
int main (){
    int x;
    char c;
    double d;
    cin >>x >>c >>d;
    cout <<x << " "<< c <<endl<<"Double "<<d<<endl;

    char s ='A';
    int ascii= s;
    cout <<ascii<<endl;
    cout << (int)s<<endl; //typecasting

    int y = 65;
    cout << (char)y<<endl;
    return 0;
}

/*
#include <iostream>
int main (){
    int x;
    char c;
    std::cin >>x >>c;
    std::cout <<x << " "<< c <<std::endl;
    return 0;
}
*/