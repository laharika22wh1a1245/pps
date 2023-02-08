#include<stdio.h>
int  prime();
int main()
{
	int n,res;
	printf("enter n");
	scanf("%d",&n);
res=prime(n);
	if(res==2)
        printf("it is prime");
        else
        printf("not a prime");

}
prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
		count++;
	}
	return(count);
	
}

