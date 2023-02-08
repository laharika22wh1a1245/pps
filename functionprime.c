#include<stdio.h>
void prime (int a);
void main()
{
int n,count=0,i;
printf("enter value of n");
scanf("%d",&n);
prime(n);
}

prime(int n)

{
	int i,count=0;
 	for(i=1;i<=n;i++)
{
	if(n%i==0)
		count++;
}
if(count==2)
printf("it is prime");
else
printf("not a prime");
}
