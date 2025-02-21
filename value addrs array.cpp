#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter %d VALUE : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n VALUE OF arr[%d]= %d",i,arr[i]);
		printf("\n ADDRESS OF arr[%d]= %u",i,&arr[i]);
	}
	return 0;
}
