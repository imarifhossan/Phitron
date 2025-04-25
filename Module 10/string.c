#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s",s);
    printf("%s",s);
    printf("%c",s[5]);//get nul value
    printf("%d",s[5]);//get nul ASCI character integer value
    return 0;
}



/*
#include <stdio.h>
int main()
{
    char a[4];
    for(int i=0;i<4;i++){
        scanf("%c",&a[i]);
    }
    for(int i=0;i<4;i++){
        printf("%c\n",a[i]);
    }
    return 0;
}
*/