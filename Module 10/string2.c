#include <stdio.h>
// include it if gets() and fgets() don't work properly
#include <string.h>
int main(){
    int a[50];
    /*
    scanf("%s",&a);
    // It takes the input Arif but not Arif H.
    printf("%s",a);
    */

    /*
    gets(a);
    // It takes the input Hello world.and print just one line but it does not take the input of second line
    printf("%s",a);

    */
   fgets(a,20,stdin);
   // It takes the input Hello world.and stop when it takes enter print two line, in the size we have to put last one space for null , when we declare size we have to count the space also
   printf("%s",a);
    
    return 0;
}