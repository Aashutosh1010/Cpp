#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter c:";
	cin>>c;
	
	if(a>b&&a>c)
	cout<<a<<"a is maxx";
	else if(b>c&&b>a)
	cout<<b<<"b is maxx";
	else if(c>a&&c>b)
	cout<<c<<"c is maxx";
	
	return 0;
}
