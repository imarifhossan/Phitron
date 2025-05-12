#include <stdio.h>
void reverse_array(int a[],int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse_array(a,n);
    return 0;
}