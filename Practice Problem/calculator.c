#include <stdio.h>
int main(){
    int a,b;
    char e;
    scanf("%d %c %d",&a,&e,&b);
    int result=0;
    if(e=='+'){
        result = a+b;
        printf("%d",result);
    }
    else if(e=='-'){
        result = a-b;
        printf("%d",result);
    }
    else if(e=='*'){
        result = a*b;
        printf("%d",result);
    }
    else{
        result = a/b;
        printf("%d",result);
    }
    return 0;
}