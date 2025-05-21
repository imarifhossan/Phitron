#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[11]={1,3,5,7,9,11,13,15,17,19,21};
    int idx= 0;
    for(int i= 0;i<11;i++){
        if(a[i]==n){
            idx=i;
        }
    }
    
    int star_tracker = 1;
    int space_tracker =5+idx;
    int line_tracker = 6+idx;
    
    for(int i=0;i<line_tracker;i++){
        //space
        for(int i=0;i<space_tracker;i++){
            printf(" ");
        }
        // star
        for(int i=1;i<=star_tracker;i++){
           printf("*");
        }
        printf("\n");
        star_tracker+=2;
        space_tracker--;
    }

    // second part
    space_tracker =5;
    line_tracker=5;
    for(int i=0;i<line_tracker;i++){
        for(int i=0;i<5;i++){
            printf(" ");
        }
        for(int i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}