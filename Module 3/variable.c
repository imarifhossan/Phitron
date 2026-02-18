#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    scanf("%d",&i);
    long long int j;
    scanf("%lld",&j);
    float f;
    scanf("%f",&f);
    char ch;
    scanf(" %c",&ch);
    
    printf("%d\n",i);
    printf("%lld\n",j);
    printf("%.2f\n",f);
    printf("%c",ch);
    return 0;
}
