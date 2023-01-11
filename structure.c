#include<stdio.h>
struct student
{
char name[20];
int rollnum, marks;
};
void main ()
{
	struct student st1,st2;
	 printf("\n enter name of first student,second student");
	 gets(st1.name);
	 gets(st2.name);
	 printf("\n enter rollnum marks  of first student,second student");
	 scanf("%d%d",&st1.rollnum,&st1.marks);
	 scanf("%d%d",&st2.rollnum,&st2.marks);
	 printf("\n first student details \n");
	 printf("\n second student details \n");
	 puts(st1.name);
	 printf("\n %d %d",st1.rollnum,st1.marks);
	 puts(st2.name);
	 printf("\n %d %d",st2.rollnum,st2.marks);
}



