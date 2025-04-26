// Dictionary wise serial comparision
#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int i = 0;
    // compare with built in
    int val= strcmp(a,b);
    printf("%d",val);
    if(val<0){
        printf("A is smaller");
    }
    else if(val==0){
        printf("Equal");
    }
    else if(val>0){
        printf("B is smaller");
    }
    
    return 0;
}

// Manual way of compare two string lexicographical way
/*
// If we use true in while then we have to use <stdbool.h> header file 
// Dictionary wise serial comparision
#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int i = 0;
    // compare manually
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] < a[i])
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }

    return 0;
}

*/