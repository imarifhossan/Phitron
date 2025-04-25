#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // find the minimum number of the array
    int min=a[0],min_index=0;
    int max=a[0],max_index=0;
    for (int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            min_index=i;
        }
        if(a[i]>max){
            max=a[i];
            max_index=i;
        }
    }
    
    a[max_index]=min;
    a[min_index]=max;

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
/*
#include <stdio.h>
#include <limits.h>

int  main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    int min = INT_MAX;
    int max= INT_MIN;
    printf("%d\n",min);
    while(i<j){
        if(a[i]<min){
            min=a[i];
        }
        i++;
        j--;
        
    }    
   
    return 0;
}*/