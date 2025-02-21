#include<iostream>
class A
{
	public:
		void getdata();
		void display();
		void sort(int x[5]);
		
};
void A::getdata()
{
	int i,j[5];
	cout<<"Enter data for list.";
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter "<<(i+1)<<"data";
		cin>>j[i];
	}
	cout<<"\n List is Completed.";
	getch();
}
void A::dispay()

{
	int i,j[5];
	for(i=0;i<5;i++)
	{
		cout<<"\t ",j[i];
	}
	getch()
}
void A::sort(int x[5])
{
	int i,j,k;
	for(i=1;i<size;i++)
	{
		k=x[i];
		j=i-1;
		while(k<x[j]&&j>=0)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=k;
	}
}
int main()
{
	A p;
	A q;
	A r;
	p.getdata();
	q.display();
	r.sort();
	q.display();
	getch();
}
	
}
