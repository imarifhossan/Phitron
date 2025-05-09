#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star = n*2-1;
    int space = 0;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=space;s++){
            printf(" ");
        }
        for(int j=star;j>=1;j--){

            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}
/*
#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int spaces = i;
        int stars = 2 * (rows - i) - 1;

        // Print spaces
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

        // Print stars
        for (int a = 0; a < stars; a++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/

/*
 *********
  *******
   *****
    ***
     *
*/