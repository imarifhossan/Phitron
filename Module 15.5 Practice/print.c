#include <stdio.h>
void printing(int n){
    for(int i=1;i<=n;i++){
        printf("%d",i);
        if(i<=n-1){
            printf(" ");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printing(n);
    return 0;
}