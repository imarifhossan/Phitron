#include <stdio.h>
#include <limits.h>
int main (){
    int a[6][6];
    int pos_r_1,pos_c_1,mid_r=3,mid_c=3;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                pos_r_1=i;
                pos_c_1=j;
            }
        }
    }
    int result = abs(mid_r - pos_r_1) + abs(mid_c -  pos_c_1);
    printf("%d",result);
}