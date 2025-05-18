#include <stdio.h>
void printNto1 (int n,int i){
    
    if(i==0){
        return;
    }
    printf("%d",i);
    //remove trailing space
    if(i>1){
        printf(" ");
    }
  
    printNto1(n,i-1);

}
int main (){
    int n;
    scanf("%d",&n);
    printNto1(n,n);
    return 0;
}