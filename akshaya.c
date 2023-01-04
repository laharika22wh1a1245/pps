#include<stdio.h>
void main()
{
int age;
float sal;
char gender,name[10],doj[10];
printf("\n give the name,gender,age,sal,doj");
scanf("%s \n %c%d%f%s",name,&gender,&age,&sal,doj);
printf("\n name of person:%s \n gender:%c \n age:%d \n sal:%f \n doj:%s",name,gender,age,sal,doj);
}
