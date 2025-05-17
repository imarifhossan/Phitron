#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int hash =1;
    int minus = 1;
    int space = n-1;
    //first part
    for(int i=0;i<=n-2;i++){
        // space
        for(int s=1;s<=space;s++){
            printf(" ");
        }
        //hash
        for(int i=1;i<=hash*2-1;i++){
            printf("#");
        }
        printf("\n");
        space--;
        for(int s=1;s<=space;s++){
            printf(" ");
        }
        //minus
        for(int i=1;i<=minus*2+1;i++){
            printf("-");
        }
        
        printf("\n");
        hash+=2;
        minus+=2;
        space--;   
    }
}