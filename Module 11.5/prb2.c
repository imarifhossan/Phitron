#include <stdio.h>
int main(){

    char s[100001];
    scanf("%s",&s);
    int len = strlen(s);
    int count =0;
    for(int i=0;i<len;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    int constant = len-count;
    printf("%d",constant);
    return 0;
}