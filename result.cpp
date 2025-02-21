#include<stdio.h>
#include<conio.h>
struct student 
{
	char name[20];
	int rollno;
	int marks[2];
};
int main()
{
	int i,j;
	struct student s[3];
	for(i=0;i<3;i++)
	{
		printf("\n ENTER DATA FOR STUDENT %d",i+1);
		printf("\n ENTER NAME : ");
		scanf("%s",s[i].name);
		printf("\n ENTER ROLL NUMBER : ");
		fflush(stdin);
		scanf("%d",&s[i].rollno);
		for(j=0;j<2;j++)
		{
			printf("\n ENTER MARKS FOR SUBJECT %d : ",j+1);
			fflush(stdin);
			scanf("%d", &s[i].marks[j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("DATA OF STUDENT %d\n",i+1);
		printf("\n NAME : %s",s[i].name);
		printf("\n ROLL NUMBER : %d",s[i].rollno);
		for(j=0;j<2;j++)
		{
			printf("\n MARKS OF SUBJECT : %d ",s[i].marks[j]);
			fflush(stdin);
		}
		printf("\n");
	}
	return 0;
}
