#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	int y=5;
	printf("\n x=%d and y=%d",x,y);
	x=5;
	printf("\n x=%d and y=%d",x,y);
	x+=y;
	printf("\n x+=y = %d",x);
	x=5;
	x*=y;
	printf("\n x*=y = %d",x);
	x=5;
	x/=y;
	printf("\n x/=y=%d",x);
	x=5;
	x%=y;
	printf("\n x mod y = %d",x);
	return 0;
}
