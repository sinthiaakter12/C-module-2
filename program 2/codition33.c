#include <stdio.h>
int main()
{
   int a, b;
   printf("enter the value of a,b;");
   scanf("%d%d", &a, &b);
   if (a >= 5000)
   {
      printf("going cox'sbazar\n");
      if (b >= 10000)
      {
         printf("going saint martin");
      }
      else
      {
         printf("no going");
      }
   }
   else
   {
      printf("back home");
   }
   return 0;
}