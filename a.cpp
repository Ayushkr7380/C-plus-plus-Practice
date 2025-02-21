#include<stdio.h>
main()
{
	static int num=4;
	cout<<num;
	num--;
	if(num)
	main();
	return 0;
}
