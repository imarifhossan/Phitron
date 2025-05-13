#include <stdio.h>
int countOdd (int a[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    return count;
}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result = countOdd(a,n);
    printf("%d",result);
    return 0;
}