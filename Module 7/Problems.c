/*Take an array from input and print all the even numbers of that array.*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
            printf("%d\n", a[i]);
        }
        
    }
    if(count==0){
        printf("There is no even numbers of your given array");
    }

    return 0;
}