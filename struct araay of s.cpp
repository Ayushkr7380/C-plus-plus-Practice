#include<stdio.h>
#include<conio.h>
struct student 
{
	char name[30];
	int roll;
};
struct student s[3];
int main()
{
	int i;
	printf("\n Enter Details of Student.");
	for(i=0;i<3;i++)
	{
		
		printf("\n Enter name : ");
		gets(s[i].name);
		printf("\n Enter roll : ");
		scanf("%d",&s[i].roll);
	}
	printf("\n Details of Student.");
	for(i=0;i<3;i++)
	{
		printf("\n Name : ");
		puts(s[i].name);
		printf("\n Roll : %d",s[i].roll);
	}
	return 0;
}
