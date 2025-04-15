#include <stdio.h>
int main()
{

   int a;
   scanf("%d", &a);
   // get the first digit of the number
   int result = a / 1000;
   /*
   // get the last digit of the number
   int result = a % 10;
   */
   if (result % 2 == 0)
   {
      printf("EVEN");
   }
   else
   {
      printf("ODD");
   }
   return 0;
}