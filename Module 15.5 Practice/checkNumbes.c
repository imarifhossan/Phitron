#include <stdio.h>
int checkNumber(int n){
    int status;
    if(n>0){
        status=1;
    }
    else if(n<0){
        status=-1;
    }
    else {
        status=0;
    }
    return status;
}
int main (){
    int x;
    scanf("%d",&x);
    int result = checkNumber (x);
    if(result==1){
        printf("Positive");
    }
    else if(result==-1){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
}