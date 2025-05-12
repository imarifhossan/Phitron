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

/*
#include <stdio.h>

int main (){
  int a[4]={1,2,3,4};
  int *p;
  printf("p==> %p\n",p);
  printf("a==> %p\n",a);
  printf("a[0]==> %p\n",&a[0]);
  printf("a[1]==> %p\n",&a[1]);
  printf("a[2]==> %p\n",&a[2]);
  printf("a[3]==> %p\n",&a[3]);
  p=a+3;
  printf("new p==> %p\n",p);
  *p=5;
  printf("%d \n",a[3]);//5

}


*/

#include <stdio.h>
int* fun(int a[],int n)
{
    a[2]=200;
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("%p\n", a);//6421984
    printf("%p\n", &a[0]);//6421984
    int* result = fun(a,n);
    // for(int i=0;i<n;i++){
    //     printf("%d ", result[i]);
    // }
    printf("%p", &result[2]);//6421984
    
}