/*
#include <stdio.h>
void m(int *p){
    int i=0;
    for(i=0;i<5;i++){
        printf("%d ",p[i]); //6 5 3 0 0 
    }
}
int main (){
    int a[5]={6,5,3};
    m(a);

}
*/
/*
#include <stdio.h>
void m(int p,int q){
    int temp = p;
    p=q;
    q=temp;
}
int main (){
  int a=6,b=5;
  m(a,b);
  printf("%d %d",a,b);//6 5

}
*/

/*
#include <stdio.h>

int main (){
  int a[4]={1,2,3,4};
  
  printf("%d ",*a);//1

}
*/

#include <stdio.h>

int main (){
  int a[4]={1,2,3,4};
  int *p;
  p=a+3;
  *p=5;
  printf("%d ",a[3]);//5

}
