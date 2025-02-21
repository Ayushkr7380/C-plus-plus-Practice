#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char sname[20];
	int l;
	printf("\nEnter your name : ");
	scanf("%s",&sname);
	l=strlen(sname);
	printf("\nSize of your name : %d",l);
	return 0;
}
