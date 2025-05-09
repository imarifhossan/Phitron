// this function have parameter and return type
// Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)
#include <stdio.h>
int even_odd (int a){
     int result;
     if(a%2==0){
       return result=0;
     }
     else {return result=1;}
    
}
int main (){
   int a;
   scanf("%d",&a);
   int answer = even_odd(a);
   if(answer==0){
    printf("Even");
   }
   else{
    printf("Odd");
   }
}