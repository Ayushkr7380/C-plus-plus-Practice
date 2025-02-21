#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,sum=0;
	do
	{
		printf("\n%d",i);
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("=%d",sum);
	return 0;
}
