#include<stdio.h>
#include<conio.h>
int main ()
{
	int a=5,*pi=&a;
	char b='x',*pc=&b;
	float c=1.7,*pf=&c;
	printf("\n value of pi = Address of a = %u",pi);
	printf("\n value of pc = Address of b = %u",pc);
	printf("\n value of pf = Address of c = %u",pf);
	pi++;
	pc++;
	pf++;
	printf("\n Now Value of pi = %u",pi);
	printf("\n Now Value of pc = %u",pc);
	printf("\n Now Value of pf = %u",pf);
	return 0;
}

