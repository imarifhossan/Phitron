#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //        if(a[i]==j){
    //         count[j]++;
    //        }
    //     }
    // }
    for (int i = 0; i < 6; i++)
    {
        printf("%d->%d\n", i, count[i]);
    }

    // printf("%d->%d\n",0,count0);
    // printf("%d->%d\n",1,count1);
    // printf("%d->%d\n",2,count2);
    // printf("%d->%d\n",3,count3);
    // printf("%d->%d\n",4,count4);
    // printf("%d->%d\n",5,count5);
    return 0;
}