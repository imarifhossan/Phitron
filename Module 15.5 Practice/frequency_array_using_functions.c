#include <stdio.h>
void frequencyNumbers (int a [],int n, int fre[]){
    for(int i=1;i<=n;i++){
        fre[a[i]]++;
    }
}
int main (){
    int n,m;
    scanf("%d %d",&n, &m);
    int a[n], fre[m];
    for(int i=1;i<=n;i++){
         scanf("%d",&a[i]);
    }
    // other way to set fre array value to o for all
    for (int i=1;i<=m;i++){
        fre[i]=0;
    }
    frequencyNumbers(a,n,fre);
    for(int i=1;i<=m;i++){
         printf("%d \n",fre[i]);
    }

    return 0;
}