#include<iostream>
using namespace std;
main()
{
	int a;
	int sum = 0;
	
	while(a!=0)
	{
		cout<<"Enter number: ";
		cin>>a;
		sum = sum + a;
		cout<<"Sum Press: 0"<<endl;
	}
	cout<<"Sum: "<< sum <<endl;
}
