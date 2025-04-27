#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }

    int countdiv2=0;
    int countdiv3=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && a[i]%3==0){
            countdiv2++;
        }
        else if(a[i]%2==0){
            countdiv2++;
        }
        else if(a[i]%3==0){
            countdiv3++;
        }
    }
    printf("%d %d",countdiv2, countdiv3); 
    return 0;
}