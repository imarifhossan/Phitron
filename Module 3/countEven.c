#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        if(i%2==0){
            c++;
        }   
    }
    printf("%d\n",c);
    return 0;
}