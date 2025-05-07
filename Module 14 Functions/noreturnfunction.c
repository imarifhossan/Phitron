#include <stdio.h>
// as this function does not return anything we have to declare here void
void sum (int a, int b){
    
    int sum =  a+b;
    printf("%d",sum);
}
int main (){
     int a,b;
     scanf("%d %d",&a,&b);
     sum(a,b);
    
    return 0;
}