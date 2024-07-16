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
	
	void displayStudent()
	{
		cout<<"name:"<<name<<endl;
		cout<<"roll:"<<roll<<endl;
		cout<<"mobile:"<<mobile<<endl;
		cout<<"address:"<<address<<endl;
	}
};
int main()
{
	Student s1,s2;
	
	s1.displayStudent();
	s2.displayStudent();
	return 0;
}

