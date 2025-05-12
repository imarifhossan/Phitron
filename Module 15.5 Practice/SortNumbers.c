#include <stdio.h>
void ascending (int* a, int *b,int n){
    // copy array a to array b
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
     for(int i=0;i<2;i++){
        for(int j=i+1;j<=3;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     for(int i=0;i<3;i++){
        printf("%d\n",a[i]);
     }
     printf("\n");
    for(int i=0;i<3;i++){
        printf("%d",b[i]);
        if(i<2){
            printf("\n");
        }

    }  
}
int main(){
    int a[3],b[3];

    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    } 
    ascending(a,b,3);
    
    return 0;
}