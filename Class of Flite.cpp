#include<iostream>
using namespace std;

class Flite
{
	public:
	int Time;
	string Seat;
	string Duration;
	string Destination;
	string Price;
	
	Flite()
	{
			cout<<"Time:";
		cin>>Time;
		cout<<"Seat:";
		cin>>Seat;
		cout<<"Duration:";
		cin>>Duration;
		cout<<"Price:";
		cin>>Price;
	}

	void DisplayFlite()
	{
		cout<<Time;
		cout<<Seat;
		cout<<Duration;
		cout<<Price;
	}
};
 int main()
{
	Flite f1;
	return 0;
}

