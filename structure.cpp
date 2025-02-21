#include<stdio.h>
#include<conio.h>
struct student
{
	char name[50];
	int rollno;
	float fee;
};
main()
{
	struct student s,*p;
	p=&s;
	printf("\n Enter Name :");
	gets(p->name);
	printf("\n Enter Roll No. :");
	scanf("%d",&p->rollno);
	printf("\n Enter Fee :");
	scanf("%f",&p->fee);
	printf("\n ALL INFO. ABOUT STUDENT ");
	printf("\n NAME : ");puts(p->name);
	printf("\n ROLL NUMBER : %d",p->rollno);
	printf("\n FEE : %f",p->fee);
	return 0;
}

