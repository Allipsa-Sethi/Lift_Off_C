#include<stdio.h>
int main()
{
   int n, sum = 0, r;

   printf("enter a number\n");

   for (scanf("%d", &n); n != 0; n = n/10) 
        {
            r = n % 10;
            sum = sum + r;
        }

   printf("sum of digits of the number = %d\n", sum);

   return 0;
}
