#include <stdio.h>
//this hello is a recursive function and it is a infinite function  
void hello (){
    printf("Hello\n");
    hello();
}
int main (){
    printf("Hi\n");
    hello();
    return 0;
}