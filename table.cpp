#include<stdio.h>
#include<conio.h>
 main()
{
	int t,i,n;
	printf("\n Enter value of n : ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		t=n*i;
		printf("\n %d*%d=%d",n,i,t);
	}
	return 0;
}
