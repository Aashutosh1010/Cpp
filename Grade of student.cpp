#include<iostream>
using namespace std;
class Student
{
	public:
	int roll;
	string name;
	int marks;
	
	Student()
	{
		cout<<"Roll no:";
		cin>>roll;
		cout<<"Name:";
		cin>>name;
		cout<<"Marks:";
		cin>>marks;
	}
	void display()
	{
		cout<<"roll no: "<<roll<<endl;
		cout<<"name"<<name<<endl;
		cout<<"marks"<<marks<<endl;
		cout<<"grade:";
		
		if(marks>90 && marks<=100)
		{
			cout<<"O";
		}
		else if(marks>80 && marks<=90)
		{
			cout<<"A";
		}
		else if(marks>70 && marks<=80)
		{
			cout<<"B";
		}
		else if(marks>60 && marks<=70)
		{
			cout<<"C";
		}
		else if(marks>50 && marks<=60)
		{
			cout<<"D";
		}
		else if(marks>40 && marks<=50)
		{
			cout<<"E";
		}
		else if(marks<30)
		{
			cout<<"fail";
		}
	}
};
	int main()
	{
		Student s1,s2;
		s1.display();
		s2.display();
	}
