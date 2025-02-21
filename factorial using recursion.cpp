#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
main()
{
	int i,f;
	printf("\n Enter a Number : ");
	scanf("%d",&i);
	f=fact(i);
	printf("\n Factorial of %d is %d.",i,f);
}
