#include<stdio.h>
#include<math.h>
int square(int a)
{
    int b= a*a;
}
int main(void)
{
    int x= 10;
    int y=square(x);
    printf("square of the number is: %d",y);
    return 0;
}
