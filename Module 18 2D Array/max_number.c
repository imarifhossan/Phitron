#include <stdio.h>
void maxNumber (int a[],int n,int i,int max){
    if(i==n){
        printf("%d",max);
        return;
    }
    
    if(a[i]>max){
        max=a[i];
    }
    maxNumber(a,n,i+1,max);

}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    maxNumber(a,n,0,a[0]);
    return 0;
}