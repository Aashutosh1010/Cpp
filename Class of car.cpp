#include<iostream>
using namespace std;

class Car
{
	int Avg;
	string Company;
	string Modal;
	string Color;
	{
		Car()	
		cout<<"Company:";
		cin>>Company;
		cout<<"Avg:";
		cin>>Avg;
		cout<<"Modal:";
		cin>>Modal;
		cout<<"Color:";
		cin>>Color;
	
	}
	void DisplayCar()
	{
		cout<<Company;
		cout<<Avg;
		cout<<Modal;
		cout<<Color;
	}
};
int main()
{
	Car c1;
	return 0;
}

