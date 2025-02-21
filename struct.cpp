#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	float fee;
	char name[20];
	char course[3];
	
};
main()
{
	struct student s1;
	printf("\nEnter fee:");
	scanf("%d",s1.fee);
	printf("\nEnter Roll:");
	scanf("%d",&s1.roll);
	printf("\nEnter Name:");
	scanf("%s",&s1.name);
	printf("\nEnter course:");
	scanf("%d",s1.course);

	return 0;
}
