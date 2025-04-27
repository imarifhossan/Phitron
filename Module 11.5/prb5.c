#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2, &d);
        double days_need = (m1*d)/(m1+m2);
        // printf("%lf\n",days_need);
        // // if(days_need-(int)days_need==0){
        // //    printf("%f\n",days_need);
        // // }
        // // else{
        // //     printf("%f\n",days_need)+1;
        // // }
        double remaining_days = d - days_need;
        printf("%.lf\n",remaining_days);
    }

     
    
    return 0;
}
