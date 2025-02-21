#include<stdio.h>
#include<conio.h>
struct date 
{
	int dd;
	int mm;
	int yy;
};
struct date d;
int main()
{
	printf("\n ENTER DATE : ");
	scanf("%d",&d.dd);
	printf("\n ENTER MONTH : ");
	scanf("%d",&d.mm);
	printf("\n ENTER YEAR : ");
	scanf("%d",&d.yy);
	printf("\n ENTER DATE(dd/mm/yy) : ");
	printf("%d/%d/%d",d.dd,d.mm,d.yy);
	return 0;
}
