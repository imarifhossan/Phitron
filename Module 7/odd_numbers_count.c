/*Take an array from input and count how many odd numbers are present in that array.
*/
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
        if (a[i] % 2 != 0)
        {
            count++;
        }
        
    }
    if(count==0){
        printf("There is no odd numbers of your given array");
    }
    else {
        printf("Odd number count = %d",count);
    }


    return 0;
}