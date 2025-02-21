#include<stdio.h>
#include<conio.h>
struct student 
{
	char name[20];
	int rollno;
	float fee;
};
int main()
{
	struct student s,*p;
	p=&s;
	printf("\n ENTER NAME : ");
	gets(p->name);
	printf("\n ENTER ROLL NUMBER : ");
	scanf("%d",&p->rollno);
	printf("\n ENTER FEE : ");
	scanf("%f",&p->fee);
	
	printf("\n ALL INFO. OF STUDENT.");
	printf("\n NAME : ");
	puts(p->name);
	printf("\n ROLL NUMBER = %d ",p->rollno);
	printf("\n FEE : %f ",p->fee);
	return 0;
}
