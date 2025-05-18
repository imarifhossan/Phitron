#include <stdio.h>
void printReverseArray(int a[],int n, int i){
    if(i==n){
        return;
    }
    printReverseArray(a,n,i+1);
    if(i%2==0){
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
    printReverseArray(a,n,0);
    return 0;
}


/*
#include <stdio.h>
void printReverseArray(int a[], int i){
    if(i<0){
        return;
    }
    if(i%2==0){
        printf("%d ",a[i]);
    }
    printReverseArray(a,i-1);

}
int main (){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printReverseArray(a,n-1);
    return 0;
}
*/