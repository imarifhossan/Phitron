#include <stdio.h>
#include <stdlib.h>
int main (){
    int r;
    scanf("%d",&r);
    int a[r][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int primary_diagonal_sum =0, secondary_diagonal_sum=0;
  for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==j){
                primary_diagonal_sum+=a[i][j];
            }
            if(i + j == r - 1){
                secondary_diagonal_sum+=a[i][j];
            }
        }
    }


    // int difference= primary_diagonal_sum - secondary_diagonal_sum;
    // if(difference<0){
    //     difference=difference*-1;
    // }

     int difference= abs(primary_diagonal_sum - secondary_diagonal_sum);
   
    
    printf("%d",difference);
}