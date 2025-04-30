#include  <stdio.h>
int main(){
    long long int n,m;
    scanf("%lld %lld",&n, &m);
    int ld_n=n%10;
    int ld_m=m%10;
    printf("%d",ld_n+ld_m);
    return 0;
}