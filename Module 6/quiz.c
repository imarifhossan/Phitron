#include <stdio.h>
int main()
{
    for(int i = 0;i<=10;i++){
        if(i>2){
            continue;
        }
      printf("hi");
    }
}
/*
#include <stdio.h>
int main()
{
    for(int i = 0;i<5;i++){
        if(i==3){
            continue;
        }
      printf("%d ",i);
    }
}
*/

/*
#include <stdio.h>
int main()
{
    for(int i=0; i<=10; i++){
        printf("hi");
        if(i>2)
        {            
            break;
        }
    }
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int i=-3;
    while(i<0){
        for(int j=0;j<5;j++){
            printf("#");
        }
        i--;
    }
    return 0;
}
*/