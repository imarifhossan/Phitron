/*
#include <stdio.h>
void fun(int a[])
{
    a[2] = 300;
}
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int x = 10;
    fun(a);
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
}
*/

// If we dynamically get the array size than we have to send the array size in the function and we have to receive it from the function also

#include <stdio.h>
void fun(int a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    fun(a,n);
    
}