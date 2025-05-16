#include <stdio.h>
#include <string.h>
void frequencyLetters(char s[], int fre[])
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        int idx = s[i] - 97;
        fre[idx]++;
    }
}

void printArray (int fre[]){
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 97, fre[i]);
        }
    }
}
int main()
{
    char s[1000001];
    scanf("%s", s);
    int fre[26] = {0};

    frequencyLetters(s, fre);
    printArray(fre);

    return 0;
}