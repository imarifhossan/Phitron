// built in way
#include <stdio.h>
#include <string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    
    strcpy(a,b);

    printf("%s %s", a,b);
    return 0;
}

// manual way
/*
#include <stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int length = strlen(b);
    // copying b array into a
    for(int i=0;i<=length;i++){
        a[i]=b[i];
    }
    printf("%s %s", a,b);
    return 0;
}
*/