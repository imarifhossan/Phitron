#include <stdio.h>
int is_palindrome(char s[]){
    int i=0,j=strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]){
           return 0;
        }
        i++;
        j--;    
    }
    return 1;
}
int main (){
    char s[1001];
    scanf("%s",s);
    int result = is_palindrome(s);
    if(result ==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}