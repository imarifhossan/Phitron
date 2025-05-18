#include <stdio.h>
void print1toN (int n,int i){
    
    if(i==n+1){
        return;
    }
    printf("%d\n",i);
    print1toN(n,i+1);

}
int main (){
    int n;
    scanf("%d",&n);
    print1toN(n,1);
    return 0;
}