#include<stdio.h>
int GCD(int,int);
int main()
{
	int a,b,gcd;
	printf(“enter any two numbers”);
	scanf(“%d%d”,&a,&b);
	gcd=GCD(a,b);
	printf(“GCD of %d and %d is %d”,a,b,gcd);
	return 0;
}
int GCD(int x, int y)
{
	if(y==0) 
	return x;
	else
	return GCD(y,x%y);
}