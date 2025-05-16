#include <stdio.h>
#include <string.h>

void DigitCount (char a[]){
    int len = strlen(a);
    int count = 0, cap_count=0,small_count=0;
    for(int i=0;i<len;i++){
        if(a[i]>='0'  && a[i]<='9'){
            count++;
        }
        if(a[i]>='a'  && a[i]<='z'){
            small_count++;
        }
        if(a[i]>='A'  && a[i]<='Z'){
            cap_count++;
        }
    }
    printf("Digit count = %d\n",count);
    printf("Capital count = %d\n",cap_count);
    printf("Small count = %d",small_count);
}
int main (){
    char s[100001];
    scanf("%s", s);
    DigitCount(s);
}