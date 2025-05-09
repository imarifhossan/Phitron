#include <stdio.h>
int small_to_capital(char a){
    char capital = a-32;
    // printf("%d",capital);
    return capital;
}
int main(){
    char a;
    scanf("%c",&a);
    // printf("%d",a);
    int result = small_to_capital(a);
    printf("%c",result);
    return 0;
}