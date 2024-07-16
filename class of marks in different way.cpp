#include<iostream>
using namespace std;
class student
{
	public:
	int roll;
	string name;
	int mark;
	
	Student()
	{
		cout<<"roll";
		cin>>roll;
		cout<<"Name";
		cin>>name;
		cout<<"mark";
		cin>>mark;
    }	  	
    Student (int roll,string name,int mark)
    {
    	this->roll=roll;
    	this->name=name;
    	this->mark=mark;
	}
	void calgrd();
};
void student::calgrd()
{
	if(mark>80 && mark<=90)
	{
		cout<<"O";
	}
	else if(mark>70 && mark<=80)
	{
		cout<<"A";
	}
	else if(mark>60 && mark<=70)
	{
		cout<<"B";
	}
	else if(mark>50 && mark<=60)
	{
		cout<<"C";
	}
	else if(mark>40 && mark<=50)
	{
		cout<<"D";
	}
	else if(mark>30 && mark<=40)
	{
		cout<<"E";
	}
	else if(mark<=30)
	{
		cout<<"Fail";
	}
}
int main()
{
	Student s1.(1,"Ravi",85);
	s.calgrd();
	return 0;
}

