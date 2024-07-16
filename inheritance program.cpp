#include<iostream>
using namespace std;

class sum
{
	public:
		sum()
		{
			int a,b,c;
			a=10,b=5;
			c=a+b;
			cout<<"The sum is :"<<c;
		}
};

class sub
{
	public:
		sub()
		{
			int a,b,c;
			a=10,b=5;
			c=a-b;
			cout<<"The subtraction is :"<<c;
		}
};

class mult
{
	public:
		mult()
		{
			int a,b,c;
			a=10,b=5;
			c=a*b;
			cout<<"The multiflication is :"<<c;
		}
};

class div
{
	public:
			div()
			{
				int a,b,c;
				a=10,b=5;
				c=a/b;
				cout<<"The divition id :"<<c;
			}
};

class result:public sum, public sub, public mult, public div
{
	result  obj;
	return 0;
};
