#include<stdio.h>
void main()
{
int n,rem;
while(n>0)
{
	rem=n%10;
	printf("%d",rem);
	n=n/10;
}
}
