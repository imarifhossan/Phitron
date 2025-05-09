#include <stdio.h>
char capital_to_small (char a){
    char small = a+32;
    return small;
}
int main (){
    char x;
    scanf("%c",&x);
    char result = capital_to_small(x);
    printf("%c",result);
}