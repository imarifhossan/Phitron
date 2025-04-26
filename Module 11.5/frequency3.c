#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int fre[100000]={0};
    for(int i=0;i<x;i++){
        fre[a[i]]++;
    }
    for(int i=1;i<=y;i++){
        printf("%d\n",fre[i]);
    }
    return 0;
}