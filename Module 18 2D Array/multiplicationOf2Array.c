#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    // ascending the b array
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            while(b[i]>b[j]){
                int temp = b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        c[i]=a[i]*b[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",c[i]);
    }
    

    return 0;
}