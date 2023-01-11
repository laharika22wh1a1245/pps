#include<stdio.h>
#include<math.h>
void main()
{
float si,p,t,r,c;
printf("\n enter the value of p,t,r,...");
scanf("%f%f%f",&p,&t,&r);
si=(p*t*r)/100;
c=p*pow(1+r/100,t);
printf("\n simple intrest=%2f",si);
printf("\n compound intrest=%2f",c);
}
