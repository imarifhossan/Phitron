#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    
    // changing the index position or location of the previous assigned value to their next index (it start the next index to last ,that given from the user where new elements will be added) 
    for (int i = n; i >= index + 1; i--)
    {
        a[i] = a[i-1];
    }
    a[index]=value;
    // Printing the array
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}