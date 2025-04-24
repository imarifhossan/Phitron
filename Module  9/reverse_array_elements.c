#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // getting the last index and initial index of the array
    // int i=0,j=n-1;
    // using while loop
    /*
    while(i<j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }*/


    // using for loop
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    // printing the loop
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    } 
    return 0;
}