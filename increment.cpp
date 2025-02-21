#include<stdio.h>
#include<conio.h>
main()
{
	int x=5,y;
	x++;
	printf("\n x++ = %d",x);
	x=5;
	y=x++;
	printf("\n x++ = %d & y = %d",x,y);
	x=5;
	++x;
	printf("\n ++x = %d",x);
	x=5;
	y=++x;
	printf("\n ++x=%d and y=%d",x,y);
	return 0;
}
