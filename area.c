#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,area;
printf("enter sides of triangle a,b,c");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area of triangle=%f",area);
}

