// Flag variable
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)//input the array elements
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    // flag variable
    int flag=0;
    for(int i=0;i<n-1;i++)//for took the first index to n-1
    {
        for(int j=i+1;j<n;j++)//for took the second index(i+1) to n
        {
        //   printf("%d %d\n",a[i],a[j]);
        if(a[i]+a[j]==x){
            flag=1;
            // printf("%d %d ",a[i],a[j]);
            printf("Yes\n");
            printf("%d %d ",a[i],a[j]);
        }
        // else{
        //     printf("%d %d ",a[i],a[j]);
        //     printf("No\n");
        // }
        }
    }
    // checking the flag variable value increased or not

    if(flag==0){
        printf("No");
    }
    
    return 0;
}