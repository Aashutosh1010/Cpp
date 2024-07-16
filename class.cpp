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
		cin>>name;
		cin>>roll;
		cin>>mobile;
		cin>>address;
	}
};
int main()
{
	Student s1,s2;
	cout<<"Enteer a";
	cin>>s1.name;
	cin>>s1.roll;
	cin>>s1.address;
	cin>>s1.mobile;
	cout<<"Enter b";
	cin>>s2.name;
	cin>>s2.roll;
	cin>>s2.address;
	cin>>s2.mobile;
	
	cout<<s1.roll;
	cout<<s2.roll;
	cout<<s1.name;
	cout<<s2.name;
	cout<<s1.address;
	cout<<s2.address;
	cout<<s1.mobile;
	cout<<s2.mobile;
	
	return 0;
}

