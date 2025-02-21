#include<stdio.h>
#include<conio.h>
main()
{
	int x=5,y=0,z;
	z=x&&y;
	printf("\n x&&y =%d",z);
	z=x||y;
	printf("\n x||y =%d",z);
	z=!y;
	printf("\n !y =%d",z);
	return 0;
}
