#include <iostream>
int main (){
    int x =100;
    char c =  'A';
    double d = 34.36;
    std::cout<< "Hello buddy"<<std::endl;//std:: endl create the new line exactly same for  ":\n" in C
    std:: cout << x <<' '<< c <<' '<<d;
    std::cout <<std:: endl; //creating  newline
    std:: cout << x <<" "<< c <<" "<<d <<"\n"; //even the "\n" is also works here
    std::cout << "My favorite number  is " <<x <<std::endl; 
    return 0;
}