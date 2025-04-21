#include <stdio.h>
int main(){
    int arr[5];
    /*
    // manual way of getting input 
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    */

   /*(int i=0;i<5;i++)*/
   /*(int i=0;i<n;i++)*/
   /*(int i=0;i<=n-1;i++)*/
   for (int i=0;i<=4;i++){
    scanf("%d",&arr[i]);
   }
   for (int i=0;i<=4;i++){
    printf("%d ",arr[i]);
   }
    return 0;
}