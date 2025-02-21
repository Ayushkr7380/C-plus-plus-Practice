#include<stdio.h>
#include<conio.h>
struct date
{
	int dd,mm,yy;
};
struct emp
{
	char name[30];
	char *address;
	struct date dob;
	void display()
	{
		printf("\n Welcome");
	}
};
struct emp E1,E2,*Ep;
main()
{
	printf("\n ENTER 1ST EMPLOYEE DETAILS ");
	printf("\n ENTER NAME : ");scanf("s",E1.name);
	printf("\n ENTER ADDRESS : ");scanf("%s",E1.address);
	printf("\n ENTER DATE OF BIRTH(dd/mm/yy) : ");
	scanf("%d%d%d",&E1.dob.dd,&E1.dob.mm,&E1.dob.yy);
	Ep=&E2;
	printf("\n ENTER 2ND EMPLOYEE DETAILS ");
	printf("\n ENTER NAME : ");scanf("%s",Ep->name);
	printf("\n ENTER ADDRESS : ");scanf("%s",Ep->address);
	printf("\n ENTER DATE OF BIRTH(dd/mm/yy) : ");
	scanf("%d%d%d",&Ep->dob.dd,&Ep->dob.mm,&Ep->dob.yy);
	//E1.display();
	Ep->display();
	printf("\n DETAILS OF 1ST EMPLOYEE ");
	printf("\n NAME : %s ",E1.name);
	printf("\n ADDRESS : %s ",E1.address);
	printf("\n DOB(dd/mm/yy) : %d/%d/%d",E1.dob.dd,E1.dob.mm,E1.dob.yy);
	
	printf("\n DETAILS OF 2ND EMPLOYEE ");
	printf("\n NAME : %s ",Ep->name);
	printf("\n ADDRESS : %s ",Ep->address);
	printf("\n DOB(dd/mm/yy) : %d/%d/%d",Ep->dob.dd,Ep->dob.mm,Ep->dob.yy);
	return 0;
}

