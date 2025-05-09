#include <stdio.h>
int char_to_asci(char a){
    int result = ("%d",a);
    return result;
}
int main (){
    char a;
    scanf("%c",&a);
    int answer = char_to_asci(a);
    printf("%d",answer);
}