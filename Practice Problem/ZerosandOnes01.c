#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
    printf("%d %d",count0,count1 );
    
    return 0;
}