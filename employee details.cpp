#include<stdio.h>
#include<conio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct employee
{
	char name[30];
	char *address;
	struct date dob;
	void display()
	{
		printf("\n WELCOME ");
	}
};
struct employee e1,e2,*p;
int main()
{
	printf("\n ENTER 1st EMPLOYEE DETAILS ");
	printf("\n ENTER NAME : ");gets(e1.name);
	printf("\n ENTER ADDRESS : ");gets(e1.address);
	fflush(stdin);
	printf("\n ENTER DATE (dd) : ");
	scanf("%d",&e1.dob.dd);
	printf("\n ENTER MONTH (mm) : ");
	scanf("%d",&e1.dob.mm);
	printf("\n ENTER YEAR (yy) : ");
	scanf("%d",e1.dob.yy);
	p=&e2;
	printf("\n ENTER 2nd EMPLOYEE DETAILS ");
	printf("\n ENTER NAME : ");gets(p->name);
	printf("\n ENTER ADDRESS : ");gets(p->address);
	printf("\n ENTER DATE OF BIRTH(dd/mm/yy) : ");
	scanf("%d %d %d ",&p->dob.dd,&p->dob.mm,&p->dob.yy);
	p->display();
	printf("\n DETAILS OF 1st EMPLOYEE ");
	printf("\n NAME : ");puts(e1.name);
	printf("\n ADDRESS : ");puts(e1.address);
	printf("\n DOB(dd/mm/yy) : %d/%d/%d ",e1.dob.dd,e1.dob.mm,e1.dob.yy);
	printf("\n DETAILS OF 2nd EMPLOYEE ");
	printf("\n NAME : ");puts(p->name);
	printf("\n ADDRESS : ");puts(p->address);
	printf("\n DOB(dd/mm/yy) : %d/%d/%d ",p->dob.dd,p->dob.mm,p->dob.yy);
	return 0;
}
