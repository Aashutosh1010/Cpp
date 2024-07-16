#include<iostream>
using namespace std;

class CRec
{
	int width,height;
	public:
	CRec()
	CRec(int,int)
	int area()
	{
		return(width*height);	
	}	
};
	CRec::CRec()
	{
		width=5;
		height=5;
	}
	CRec::Crec(int a,int b)
	{
		width=a;
		height=b;
	}
	
	int main()
	{
		CRec.CRec(3,4);
		CRec.CRec();
		cout<<"Area is"<<Rec.area()<<endl;
		cout<<"Area is"<<Recb.area()<<endl;
	}
