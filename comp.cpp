#include<iostream>
comp(char,char);
int main()
{	
	char x[10],y[10];
	cout<<"\n Enter two strings:";
	cin>>x>>y;
	comp(x,y);

}
comp(char a[10],char b[10])
{
		int r;
		if((strcmp(a,b)==0))
		{
			r=1;
		}
		else
		{
			r=0;
		}
		return r;
		
}
