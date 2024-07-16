#include<iostream>
using namespace std;

class Student
{
	public:
	int Roll;
	int Mark;
	string Name;
	Student()
	{
		cout<<"Name:";
		cin>>Name;
		cout<<"Roll";
		cin>>Roll;
		cout<<"Mark:";
		cin>>Mark;
	}
	
	void displayStudent()
	{
		cout<<"Name:"<<Name<<endl;
		cout<<"Roll:"<<Roll<<endl;
		cout<<"Mark:"<<Mark<<endl;
	}
	void CalculateGrade()
	{
		if(Mark>=90)
		cout<<"O";
		else if(Marks<80)
		cout<<"A+";
		else if(Mark<70)
		cout<<"A";
		else if(Mark<60)
		cout<<"B";
		else if(Mark<50)
		cout<<"C";
		else if(Mark<40)
		cout<<"D";
	}
};
int main()
{
	Student s1,s2;
	s1.displayStudent();
	s2.displayStudent();
	return 0;
}

