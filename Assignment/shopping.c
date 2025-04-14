#include <stdio.h>
int main()
{
    int n, remaining;
    scanf("%d",&n);
    if(n>1000){
        printf("I will buy Punjabi\n");
        remaining=n-1000;
        if(remaining>=500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }else
    {
        printf("Bad luck!");
    }
    return 0;
}