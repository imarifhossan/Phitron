#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char  n[101];
    scanf("%100s",n);
   
    long long int len = strlen(n);
    long long int oddSum=0; 
    long long int evenSum =0;

    for(int i=0;i<len;i++){
        long long digit = n[i]-'0';
        long long int pos = i+1;
        if(pos%2!=0){
     
            oddSum+=digit;
        }
        else{
            evenSum+=digit;
        }
    }
    long long int difference =oddSum - evenSum;
    
    if(difference%11==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
