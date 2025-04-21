#include <stdio.h>
int main (){
    int arr [5];
    arr[2]=40;
    arr[1]=125;

    printf("%d\n",arr[2]);
    printf("%d",arr[0]);//return garbage value as we don't assign any value here
    return 0;
}