// this function have parameter and has no return type
// Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)
#include <stdio.h>
int even_odd(int a)
{

    int result;
    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    even_odd(11);
    return 0; 
}