#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);//1000000000
    printf("%d\n",a);//1000000000
    //after this it will generate garbage value
    long long int b;
    scanf("%lld",&b);
    printf("%lld\n",b);

    double f;
    scanf("%lf",&f);
    printf("%lf",f);
    return 0;
}