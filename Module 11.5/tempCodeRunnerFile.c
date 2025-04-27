#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m1,d,m2;
    scanf("%d %d",&m1,&d,&m2);
    float days_need = (m1*d)/(m1+m2);
    // printf("%f\n",days_need);
    // if(days_need-(int)days_need==0){
    //    printf("%f\n",days_need);
    // }
    // else{
    //     printf("%f\n",days_need)+1;
    // }
    float remaining_days = d-days_need;
    printf("%d",remaining_days);
    return 0;
}
