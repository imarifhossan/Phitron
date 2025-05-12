/*
#include <stdio.h>
void fun(char s[],int n)
{
    printf("%s\n",s);
    printf("%d",strlen(s));
}
int main()
{
  char s[10];
  scanf("%s",&s);
  fun(s,10);
  return 0;
}
*/

/*
#include <stdio.h>
void fun(char s[])
{
    printf("%s\n",s);
    printf("%d",strlen(s));
}
int main()
{
  char s[10];
  scanf("%s",&s);
  fun(s);
  return 0;
}
*/

#include <stdio.h>


int main()
{
  char s[10];
  scanf("%s",s);//as string is an array and it is itself stored the index of first address so without & it take the value and return it
  printf("%s",s);

  return 0;
}