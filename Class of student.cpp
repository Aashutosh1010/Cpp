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
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Roll:";
		cin>>roll;
		cout<<"Enter Mobile:";
		cin>>mobile;
		cout<<"Enter address:";
		cin>>address;
	}
};
int main()
{
	Student s1,s2;
	
	cout<<s1.name;
	cout<<s1.address;
	cout<<s1.mobile;
	cout<<s1.roll;
	

	
	return 0;
}

