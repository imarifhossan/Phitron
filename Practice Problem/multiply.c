#include <stdio.h>
int main(){
    // declare two variable
    int x,y;
    // initialize value to the variable
    scanf("%d %d",&x, &y);
    // type casting at least one variable so that we can get the exact result without garbage value
    long long int multiply =x*(long long int)y;
    printf("%lld",multiply);
    return 0;
}