#include <stdio.h>
int main ()
{
    int x; //declaration
    x=10; //initialization
    int y = 5; //declaration and initialization at the same time
    
    int arr1[5]={10,20,30,40,50}; //declaration and initialization
    for(int i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    
    //return 10 20 30 40 50
    printf("\n");

    int arr2[]={10,20,30,40}; //declaration and initialization and we can omit the size
    for(int i=0;i<4;i++){
        printf("%d ",arr2[i]);
    }
    
    //return 10 20 30 40 It automatically define its size 4
    printf("\n");

    int arr3[5]={10,20}; //declaration and initialization
    for(int i=0;i<5;i++){
        printf("%d ",arr3[i]);
    }
    //return 10 20 0 0 0

    printf("\n");

    int arr4[5]={10}; //declaration and initialization
    for(int i=0;i<5;i++){
        printf("%d ",arr4[i]);
    }
    //return 10 0 0 0 0

    printf("\n");

    int arr5[5]={0}; //declaration and initialization only works for the fixed size array if we try it with  the variable size array it does not work
    for(int i=0;i<5;i++){
        printf("%d ",arr5[i]);
    }
    //return 0 0 0 0 0
    printf("\n");

    int arr6[5]; //declaration 
    for(int i=0;i<5;i++){
        printf("%d ",arr6[i]);
    }
    //return 20 5450 055 0 0 //garbage value
    return 0;
}

