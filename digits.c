#include<stdio.h>
void main()
{
int n,rem;
printf("\n give the numbers of n..");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
printf("\n %d",rem);
n=n/10;
}
}

