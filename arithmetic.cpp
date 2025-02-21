#include<stdio.h>
#include<conio.h>
main()
{
	int x=5,y=10,z;
	z=x+y;
	printf("\n x+y = %d",z);
	z=x-y;
	printf("\n x-y = %d",z);
	z=x*y;
	printf("\n x*y = %d",z);
	z=x/y;
	printf("\n x/y = %d",z);
	z=x%y;
	printf("\n x mod y = %d",z);
	z=y%x;
	printf("\n y mod x = %d",z);
	return 0;
}
