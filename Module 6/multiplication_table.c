#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=12;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
   
    return 0;
}



// Using while loop
/*
#include <stdio.h>
int main ()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=12)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
   
    return 0;
}
*/