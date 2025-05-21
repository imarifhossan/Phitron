#include <stdio.h>
int main (){
    int n,m;
    scanf("%d %d",&n,&m);
    
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lastRow=n-1;
    // printing the last column
    for(int j=0;j<m;j++){
       printf("%d ", a[lastRow][j]);
        
    }
    printf("\n");
    int lastColumn=m-1;
    // printing the last column
    for(int i=0;i<n;i++){
       printf("%d ", a[i][lastColumn]);
        
    }
    return 0;
}