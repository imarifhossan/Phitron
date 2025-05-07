#include <stdio.h>
int main()
{
    int  ans= ceil(4.3);
    printf("%d\n",ans);//5

    int  ans2= floor(4.3);
    printf("%d\n",ans2);//4

    int  ans3= round(4.3);
    printf("%d\n",ans3);//4

    int  ans4= round(4.5);//5
    printf("%d\n",ans4);

    int  ans5= abs(-45);//return positive value
    printf("%d\n",ans5);//45

    int  ans6= pow(4,2);
    printf("%d\n",ans6);//16

    double  ans7= sqrt(20);// return square root of any number
    printf("%llf\n",ans7);//4.472136

    return 0;
}