#include<stdio.h>
#include<conio.h>
main()
{
	int s1,s2,s3,s4,s5,sum;
	float per;
	printf("\nEnter Marks of 1st Subject : ");
	scanf("%d",&s1);
	printf("\nEnter Marks of 2nd Subject : ");
	scanf("%d",&s2);
	printf("\nEnter Marks of 3rd Subject : ");
	scanf("%d",&s3);
	printf("\nEnter Marks of 4th Subject : ");
	scanf("%d",&s4);
	printf("\nEnter Marks of 5th Subject : ");
	scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\nTotal Marks of Five Subject : %d",sum);
	per=sum/5;
	printf("\nPercentage of Five Subject : %f",per);
	return 0;
}
