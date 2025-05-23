#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);

    int i= 0,j=len-1;
    int palindrome = 1;
    while (i<j){
        if(s[i]!=s[j]){
           palindrome=0;
        }
        i++;
        j--;
    }
    if(palindrome==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}