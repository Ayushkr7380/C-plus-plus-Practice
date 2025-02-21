#include<stdio.h>
#include<conio.h>
void ayush(int roll[3])
{
	int j;
	for(j=0;j<3;j++)
	{
		printf("\n Enter %d Number : %d",(j+1),roll[j]);
	}
	
}
int main(void)
{
	int i,roll[3];
	for(i=0;i<3;i++)
	{
		printf("\n Enter %d Number : ",(i+1));
		scanf("%d",&roll[i]);
	}
	ayush(&roll[i]);
	return 0;
}
