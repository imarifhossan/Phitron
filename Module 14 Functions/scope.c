#include  <stdio.h>
int x=500;
int hello ()
{
    x= 100;
    printf("hello-> %d\n",x);
}
int main ()
    
{
    x=300;
    hello();  //hello-> 100 main-> 100
    printf("main-> %d",x);
    // hello();   main-> 300hello-> 100

    return 0;
}