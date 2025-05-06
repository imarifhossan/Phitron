// return  with parameter 
#include  <stdio.h>
// declaring functions
int sum (int a, int b){
    int result = a+b;
    return result;
}
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int sum_result = sum(x,y);
    printf("%d",sum_result);
    return 0;
}