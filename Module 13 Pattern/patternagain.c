#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
    }

    // printing the first part
    for(int i=1;i<=n;i++)//printing line
    {
        for(int j=1;j<=i;j++)//printing the number
        {
            printf("%d",j);
        }
        printf("\n");
    }
    // printing reverse the second part
    int space=n-1;
    for(int i=1;i<=n-1;i++)
    {
       for(int j=1;j<=i;j++){
        printf(" ");
       }

       for(int j=1;j<=space;j++)//printing the number
        {
            printf("%d",j);
        }
       
       printf("\n");
       space--;
    }
    return 0;
}