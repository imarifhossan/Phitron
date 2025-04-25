#include <stdio.h>
int main()
{
    // we have to put one null character
    // char a[5]={'A','R','I','F'};
    
    // initialization with just double quotation ,as long as we keep space for one null character it works perfectly fine

    char s[50]="Hello World";
    printf("%s",s);
    return 0;
}