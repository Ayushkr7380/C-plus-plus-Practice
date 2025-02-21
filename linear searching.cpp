#include<stdio.h>
#include<conio.h>
#define size 5
int list[size];
void getdata()
{
		int i;
		printf("\n Enter data for list.");
		for(i=0;i<size;i++)
		{
			printf("\n Enter %d Data : ",(i+1));
			scanf("%d",&list[i]);
		}
		printf("\n List is completed.");
		getch();
}
void search()
{
	int ser,i,found=0;
	printf("\n Enter Data for Search : ");
	scanf("%d",&ser);
	for(i=0;i<size;i++)
	{
		if(ser==list[i])
		{
			found++;
		}
		if(found==0)
		{
			printf("\n %d is not Found.",ser);
		}
		else
		{
			printf("\n %d is Found %d Times.",ser,found);
		}
	}
}
main()
{
	char ch;
	while(1)
	{
		
		printf("\n\t\t\t SEARCHING MENU");
		printf("\n\t\t\t------------------");
		printf("\n\n\n\t\t\t Press '1' for getdata");
		printf("\n\t\t\t Press '2' for search");
		printf("\n\t\t\t Press '0' for Quit");
		if(ch=='0')
		{
			break;
		}
		else if(ch=='1')
		{
			getdata();
			getch();
		}
		else if(ch=='2')
		{
			search();
			getch();
		}
	}
}
