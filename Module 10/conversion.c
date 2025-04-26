#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];  


    fgets(s, 100001, stdin);

   
    int length = strlen(s);
    if (s[length - 1] == '\n') {
        s[length - 1] = '\0';  
    }

 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            s[i] = ' ';  
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32; 
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  
        }
    }


    printf("%s\n", s);

    return 0;
}
