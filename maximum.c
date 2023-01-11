#include<stdio.h>
void main()
{
float basic,hra,da,gross;
printf("\n enter the value of basic:");
scanf("%f",&basic);
if (basic<=10000)
{
	da=sal*9/10;
	hra=sal*25/100;
}
else
if(basic<=20000)
{
	da=sal*9/10;
	hra=sal*25/100;
}
else(basic>20000)
{
	dal=sal*95/100;
	hra=sal*30/100;
}
gross=basic+da+hra;
printf=("\n gross=%d",gross);
}
