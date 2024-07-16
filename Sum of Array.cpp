#include<iostream>
using namespace std;
int main()
{
	int i=0,a[5],sum=0;
	
	for(i=0;i<5;i++)
	cin>>a[i];
	
	for(i=0;i<5;i++)
	sum=sum+a[i];
	
	for(i=0;i<3;i++)
	cout<<sum;
	
	return 0;
}
