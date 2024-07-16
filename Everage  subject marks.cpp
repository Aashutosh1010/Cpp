#include<iostream>
using namespace std;
int main()
{
	int a,b,s1,s2,s3,s4,s5;
	s1=40;
	s2=25;
	s3=40;
	s4=70;
	s5=80;
	a=s1+s2+s3+s4+s5;
	cout<<"Total marks is : "<<a<<endl;
	b=a/5;
	cout<<"Everage marks : "<<b<<endl;
	if(b<33)
	{
		cout<<"This student is Fail";
	}
	else
	{
		cout<<"THis student is Pass";
	}
	return 0;
}
