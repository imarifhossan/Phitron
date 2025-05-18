#include <stdio.h>
void printMessage (int n,int i){
    
    if(i==n){
        return;
    }
    printf("I love Recursion\n");
    printMessage(n,i+1);

}
int main (){
    int n;
    scanf("%d",&n);
    printMessage(n,0);
    return 0;
}