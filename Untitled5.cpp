#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,arr[10],temp;
	for(i=0;i<10;i++)
	{
	printf("\n Enter %d Number : ",i+1);
	scanf("%d",&arr[i]);                                                                                                                                         
	}
	for(i=0,j=9;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\nAfter Reversing : ");
	for(i=0;i<10;i++)
	{
		printf("\n : %d",arr[i]);
	}
	return 0;
}
