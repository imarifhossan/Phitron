#include <stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    // concat two string
    strcat(a,b);
    
    printf("%s %s",a,b);
    return 0;
}


// manual way

/*
#include <stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    
    int length_a= strlen(a);
    int length_b= strlen(b);

    for(int i=0;i<=length_b;i++){
        a[length_a+i]=b[i];
    }
    printf("%s %s",a,b);
    return 0;
}
*/