#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // loop initializing
    for(int i=1;i<=n;i++){
        // Checking either its divisible by 3
        if(i%3==0 || i%5==0){
           printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    return 0;
}