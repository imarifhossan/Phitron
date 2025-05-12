#include <stdio.h>
void max(int a[],int n){
     int max_digit = a[0];
     for(int i=0;i<n;i++){
        if(a[i]>max_digit){
            max_digit=a[i];
        }
     }
     printf("%d",max_digit);
}
void min(int a[],int n){
     int min_digit = a[0];
     for(int i=0;i<n;i++){
        if(a[i]<min_digit){
            min_digit=a[i];
        }
     }
     printf("%d ",min_digit);
}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    min(a,n);
    max(a,n);
    return 0;
}