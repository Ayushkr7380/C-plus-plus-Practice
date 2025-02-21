#include<stdio.h>
int main()
{
	int co;
	int salary=30000;
	float com=0;
	printf("\n cotton : ");
	scanf("%d",&co);
	if(co<5000)
	{
		printf("\n NO COMISSION.");
		com=0;
	}
	else if(co>=5000&&co<15000)
	{
		printf("\n 3% Commision.");
		com=((3/100)*salary);
	}
	else if(com>=15000&&co<25000)
	{
		printf("\n 7% Commision.");
		com=((7/100)*salary);
	}
	else
	{
		printf("\n 15% Commision.");
		com=((15/100)*salary);
	}
	salary=salary+com;
	printf("\n com : %d",com);
	printf("\n Total Salary : %d",salary);
	
	return 0;
	
}
