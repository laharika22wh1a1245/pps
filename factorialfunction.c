#include<stdio.h>
void factorial(int);
void main()
{
	int  n;
	printf("enter n");
	scanf("%d",&n);
	factorial(n);
}

factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("%d", fact);
}
