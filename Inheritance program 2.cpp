#include<iostream>
using namespace std;

class a
{
	public:
		{
			cout<<"I am A";
		}
};

class b
{
	public:
		{
			cout<<"I am B";
		}
};

class c
{
	public:
		{
			cout<<"I am C";
		}
};

class d: public a, public b, public c44
{
	public:
		d()
		{
			cout<<"I am D";
		}
};

int main()

{
	d obj;
	return 0;
}
