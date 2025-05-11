#include  <stdio.h>
int main (){
    int a[5]={1,2,3,4,6};
    printf("%p\n",&a[0]);//000000000061FE30
    // printf("%p\n",&a[1]);//000000000061FE34
    // printf("%p\n",&a[2]);//000000000061FE38
    // printf("%p\n",&a[3]);//000000000061FE3C
    // printf("%p\n",&a[4]);//000000000061FE40

    //array itself act as as pointer this is the proof
    printf("%p\n",a);//000000000061FE30
    printf("%d\n",*a);//1
    *a =2; //changing the  first value using dereferencing
     printf("%d\n",a[0]);

     *(a+2)=5;//changing the a[2] value
      printf("%d\n",a[2]);

}