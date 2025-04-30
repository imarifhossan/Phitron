#include <stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int years=0,months=0,days=0, remaining=0;
    if(x>=365){
        years  = (x/365);
    }
    remaining= x%365;
    if (remaining>=30){
        months= remaining/30;
    }
    days=remaining %30;
    
   
    printf("%d years\n",years);
    printf("%d months\n",months);
    printf("%d days\n",days);
}