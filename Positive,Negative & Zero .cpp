#include<iostream>
using namespace std;
int main()
// Given number is positive, Negative Or zero
{
	int a;
	cout<<"Enter No: ";
	cin>>a;
	if(a<0)
	cout<<"The given number is negative";
	else if(a>0)
	cout<<"The given number is Positive";
	else if(a==0)
	cout<<"The given number is Zero";
	return 0;
}
