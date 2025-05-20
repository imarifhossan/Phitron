#include <stdio.h>
long long int sumOfArray (int a[],int n,int i){
    if(i==n-1){
        return a[i];
    }
    
    
    long long int sum = sumOfArray(a,n,i+1);
    return a[i]+sum;

}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long int answer = sumOfArray(a,n,0);
    printf("%lld",answer);
    return 0;
}

/*#include <stdio.h>
void sumofArray(int a[],int n,int i,long long int sum){
if(i==n){
    printf("%lld",sum);
    return;
}
sumofArray(a,n,i+1,sum+=a[i]);
}
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long int sum = 0;
    sumofArray(a,n,0,sum);

}*/