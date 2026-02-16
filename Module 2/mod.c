#include <stdio.h>
int main ()
{
    int a = 19;
    int b = 4;
    int mod  = a % b;
    printf("Mod = %d\n",mod);
    printf(a<b?"A is smaller than B": "A is greater that b");
    return 0;

}