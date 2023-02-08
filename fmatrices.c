#include<stdio.h>
void mat();
void main()
{
	int a[10][10],r,c,i,j;
	printf("enter r,c");
	scanf("%d%d",&r,&c);
	printf("enter matrix a");
        for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	printf("matrix a\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
        printf("%5d",a[i][j]);
	}
	printf("\n");
	}
	mat(a,r,c);
}
	void mat(int a[10][10],int r,int c)
	{
	int c1[10][10],i,j;
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	c1[i][j]=a[j][i];
        
	}	
	}
	
	printf(" transpose of a matrix c:\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%5d",c1[i][j]);
	}
	printf("\n");
	}
	}
	
	
