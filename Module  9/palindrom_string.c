#include <stdio.h>
int  main ()
{
    char a[1001];
    scanf("%s",&a);

    int i=0,j=strlen(a)-1;
    int palindrome = 1;
    while(i<j){
        if(a[i]!=a[j]){
        palindrome=0;
        break;
        }
        i++;
        j--;
    }
   if(palindrome==1){
    printf("YES");
   }
   else{
    printf("NO");
   }
    return 0;
}