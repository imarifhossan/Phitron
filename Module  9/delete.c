#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // declare the array
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // get the index value which we want to remove from the array
    int idx;
    scanf("%d",&idx);

    // removing the element and changing index position forward way from the idx position 
    for(int i=idx;i<n;i++){
        a[i]=a[i+1];
    }
    // print the array
    // as the last position value change it position ,if we want to see thee value upto n (i<n) then the last position return 0
    for (int i=0; i<n-1; i++){
        printf("%d ",a[i]);
    }
    return 0;
}