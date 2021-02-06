#include<stdio.h>
int main()
{
    int a,b;
        printf("enter 2 numbers:\n");
        scanf("%d %d",&a,&b);
    int sum=a+b;
        printf("sum of the 2 numbers is:%d\n",sum);
    int sub=a-b;
        printf("difference between the 2 numbers is:%d\n",sub);
    int mul=a*b;
        printf("product of the 2 numbers is:%d\n",mul);
    int div=a/b;
        printf("dividing first number by the second number gives:%d\n",div);
    return 0;
}

