#include<stdio.h>
#include<conio.h>
struct student 
{

	int rollno;
	float fee;
	char *name;
	struct student *p;
};
struct student s1,s2,s3;
int main()
{
	s1.p=&s2;
	s2.p=&s3;
	s3.p=NULL;
	printf("\n ENTER 1st STUDENT DETAILS.");
	printf("\n ENTER NAME : ");
	fflush(stdin);
	gets(s1.name);
	printf("\n ENTER ROLL : ");
	scanf("%d",&s1.rollno);
	printf("\n ENTER FEE : ");
	scanf("%f",&s1.fee);
	printf("\n ENTER 2nd STUDENT DETAILS.");
	printf("\n ENTER NAME : ");
	fflush(stdin);
	gets(s2.name);
	printf("\n ENTER ROLL : ");
	scanf("%d",&s2.rollno);
	printf("\n ENTER FEE : ");
	scanf("%f",&s2.fee);
	printf("\n ENTER 3rd STUDENT DETAILS.");
	printf("\n ENTER NAME : ");
	fflush(stdin);
	gets(s3.name);
	printf("\n ENTER ROLL : ");
	scanf("%d",&s3.rollno);
	printf("\n ENTER FEE : ");
	scanf("%d",&s3.fee);
	printf("\n DETAILS OF 1st STUDENT.");
	printf("\n NAME : ");
	fflush(stdin);
	puts(s1.name);
	printf("\n ROLL : %d ",s1.rollno);
	printf("\n FEE : %f ",s1.fee);
	printf("\n DETAILS OF 2nd STUDENT.");
	printf("\n NAME : ");
	fflush(stdin);
	puts(s1.p->name);
	printf("\n ROLL : %d ",s1.p->rollno);
	printf("\n FEE : %f ",s1.p->fee);
	printf("\n DETAILS OF 3rd STUDENT.");
	printf("\n NAME : ");
	fflush(stdin);
	puts(s2.p->name);
	printf("\n ROLL : %d ",s2.p->rollno);
	printf("\n FEE : %f ",s2.p->fee);
	return 0;
}

