#include<iostream>
using namespace std;

class Student 
{
	public:
	int roll;
	string name;
	string address;
	string mobile;
	
	Student()
	{
		cout<<"Enter Name";
		cin>>name;
		cout<<"Enter Roll";
		cin>>roll;
		cout<<"Enter Mobile";
		cin>>mobile;
		cout<<"Enter address";
		cin>>address;
	}
};
int main()
{
	Student s1,s2;

	
	return 0;
}

