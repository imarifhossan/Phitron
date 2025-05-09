#include <stdio.h>
void fun (int* p){
    // change the value using pointer
        *p=20;
        // printf("Fun function : %p\n",&p);
    }
int main (){
    int x=10;
    // pass the address
    fun(&x);
    printf("%d",x);
     printf("Main function : %p\n",&x);
    return 0;
}

