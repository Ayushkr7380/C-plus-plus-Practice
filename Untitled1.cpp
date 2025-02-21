#include<iostream>
#include<conio.h>
class A
{
    public:
    void greater();

};
void A :: greater()
{
    int x,y,z;
    cout<<"Enter 3 numbers : ";
    cin>>x>>y>>z;
    if(x>y&&x>z)
    {
        cout<<"greatest number is "<<x;
    }
    else if(y>x&&y>>z)
    {
        cout<<"greatest number is "<<y;
    }
    else if(z>x&&z>y)
    {
        cout<<"greatest number is"<<z;
    }
}
void main()
{
    A obj;
    obj.greater();
    getch();
}
