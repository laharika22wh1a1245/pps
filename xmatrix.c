#include<stdio.h>
void main()
{
int A[max][max];
int rows, cols,i,j;
printf("\n enter number of rows cols");
scanf("%d%d",&rows,&cols);
printf("\n enter %d elements,rows*cols");
for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
scanf("%d",&a[i][j]);
printf("\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
	printf("%d",a[i][j]);
}
printf("\n");
}
