#include<stdio.h>
int factorial(int n)
{
	int i,p;
	p=1;
	for(i=n;i>1;i--)
	{
		p=p*i;
	}
	return(p);
}
int main()
{
	int a, result;
	printf("enter a number: \n");
	scanf("%d", &a);
	result=factorial (a);
	printf("The factorial of %d is %d.\n", a, result);
	return 0;
}