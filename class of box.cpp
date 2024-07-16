#include<iostream>
using namespace std;

class Box
{
	public:
	int l;
	int b;
	int h;
	
	Box()
	{
		cout<<"l:";
		cin>>l;
		cout<<"b:";
		cin>>b;
		cout<<"h:";
		cin>>h;
	}

	void displayBox()
	{
		cout<<"l:"<< l <<"b:"<< b <<"h:"<< h<<endl;
	
}
	void calvol()
	{
		cout<<"vol of Box is :"<<l*b*h<<endl;
	}
	void doubleBox()
	{
		cout<<"double size is :"<<2*(l*b*h)<<endl;
	}
};
 int main()
{
	Box b1,b2,b3;
	
	b1.displayBox();
	b1.calvol();
	b1.doubleBox();
	
	
	b2.displayBox();
	b2.calvol();
	b2.doubleBox();
	
	
	b3.displayBox();
	b3.calvol();
	b3.doubleBox();
	
	return 0;
}

