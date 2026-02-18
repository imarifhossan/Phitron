#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    // first part
    for(int i=1;i<=n;i++){
        // printf("%d",i);
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    int space = 1;
    for(int i=n-1;i>=1;i--){
        for(int k=1;k>=1;k++){
            printf(" ");
        }
        // printf("%d",i);
        for(int j=1;j<=i;j++){
           
            printf("%d",j);
        }
        printf("\n");
        space++;
    }
    return 0;
}