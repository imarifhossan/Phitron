#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for (int j=i;j>=1;j--){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}
/*
F E D C B A 
E D C B A 
D C B A 
C B A 
B A 
A 
*/


/*
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for (int j=i;j>=1;j--){
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
FFFFFF
EEEEE
DDDD
CCC
BB
A
*/