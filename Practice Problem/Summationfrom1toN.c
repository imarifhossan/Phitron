#include <stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    long long int sum=0;
    for(int i=1;i<=x;i++){
       sum+=i;
    }
    printf("%lld",sum);
    return 0;
}