#include <stdio.h>
int main (){
    int x=11;
    printf("%d\n",x);//printing the integer value 10
    printf("%p\n",&x);//printing the pointer address of x

    //pointer variable
    int* ptr;

    /*
    int * ptr;
    int *ptr;
    */
    // assigning the pointer address to pointer variable
    ptr = &x;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);//printing the ptr variable address

    // dereferrencing
    printf("%d\n",*ptr); //printing the value address

    *ptr= 200; //changing the value of this address 
    printf("%d\n",*ptr); //printing the value address 
    return 0;
}
