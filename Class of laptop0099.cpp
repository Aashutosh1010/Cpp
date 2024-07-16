#include<iostream>
using namespace std;

class Laptop
{
	public:
	int Ram;
	string Name;
	string Processer;
	string GrafixCard;
	string Display;
	string Keybord;
	Laptop()
	{
		cout<<"Name:";
		cin>>Name;
		cout<<"Ram:";
		cin>>Ram;
		cout<<"Processer:";
		cin>>Processer;
		cout<<"Display:";
		cin>>Display;
		cout<<"Keyboard";
		cin>>Keybord;
		
	}
	
	void displayLaptop()
	{
		cout<<"Name:"<<Name<<endl;
		cout<<"Ram:"<<Ram<<endl;
		cout<<"Processer:"<<Processer<<endl;
		cout<<"Display:"<<Display<<endl;
		cout<<"Keybord"<<Keybord<<endl;
	}
};
int main()
{
	Laptop l1,l2;
	
	l1.displayLaptop();
	l2.displayLaptop();

	
	return 0;
}

