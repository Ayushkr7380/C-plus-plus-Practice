#include<stdio.h>
int q[10];
int f=-1;
int r=-1;
insert(int a)
{
	if(r==9)
	{
		printf("\n QUEUE OVERFLOW.");
	}
	else if(f==-1)
	{
		f=0;
		r=0;
		q[r]=a;
		printf("\n Data Inserted Successfully.");
	}
	else
	{
		r++;
		q[r]=a;
		printf("\n Data Inserted Successfully.");
	}
}
del()
{
	if(f==-1)
	{
		printf("\n QUEUE UNDERFLOW.");
	}
	else
	{
		printf("\n %d Data Deleted",q[f]);
		f++;
		if(f>r)
		{
			f=-1;
			r=-1;
		}
	}
}
main()
{
	char ch;
	int d;
	while(1)
	{
		printf("\n\t\t\t QUEUE MENU");
		printf("\n\t\t\t--------------");
		printf("\n\n\n\\t\t\t Press '1' to Insert");
		printf("\n\t\t\t Press '2' to Delete");
		printf("\n\t\t\t Press '0' to Quit");
		ch=getch();
		if(ch=='0')
		{
			break;
		}
		else if(ch=='1')
		{
			printf("\n Enter Data to Insert : ");
			scanf("%d",&d);
			insert(d);
		}
	
	
		else if(ch=='2')
		{
			del();
			
		}
	}
}
