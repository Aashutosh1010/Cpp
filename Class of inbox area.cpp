#include<iostream>
using namespace std;

class Box
{
	public:
	int l;
	int w;
	int x;
	int y;
	
	
	rect()
	{
		cout<<"l:";
		cin>>l;
		cout<<"w:";
		cin>>w;
		cout<<"x:";
		cin>>x;
		cout<<"y:";
		cin>>y;
	
	}

	void displayrec()
	{
		cin>>l>>w>>x>>y;
	
	}
	
	Cal(int p, int q)
	{
		if(p>x-w/2 && p<x+w/2 && a>y-l/2 && a<y+l/2)
		cout<<"True";
		else 
		cout<<"False";		
	}
};

int main()
{
	int p,q;
	rec r1,r2;
	cin<<p<<q;
	r1.cal(p,q);
	r2.cal(p,q);
	return 0;
}
