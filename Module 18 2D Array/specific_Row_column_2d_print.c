#include <stdio.h>
int main ()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    //input the row number which we want to print
    int x;
    scanf("%d",&x);
    
    for(int j=0;j<c;j++){
            printf("%d ", a[x][j]);//4 5 6 8 
       }
    printf("\n");   
    //input the column number which we want to print   
    int y;
    scanf("%d",&y);
     for(int i=0;i<r;i++){
            printf("%d ", a[i][y]);//3 6 11 
       }
  
  
    return 0;
}