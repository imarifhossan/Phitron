#include <stdio.h>
int absoluteNumber (int a){
    if(a<0){
        return a*-1;
    }
    else return a;
}
int main (){
    int n;
    scanf("%d",&n);
    int result= absoluteNumber(n);
    printf("%d",result);
    return 0;
}