#include <stdio.h>
// as this function does not return anything we have to declare here void
void sum (){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =  a+b;
    // return;
    printf("%d",sum);
}
int main (){
     
     sum();
    
    return 0;
}