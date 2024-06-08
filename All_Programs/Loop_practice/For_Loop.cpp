#include<iostream>
using namespace std;
main()
{

	int num;
	int i;
	int sum = 0;
	
		cout<<"Enter Number: ";
		cin>>num;
	
	for(i = 1; i <= 10; i++)
	{
	//	cout<<"Enter Number: ";
	
		cout<<"Number: "<< i <<endl;
		cout<<"No: ";
		cin>>num;
		sum = sum + num;
	}	
	
	cout<<"TotalSum: "<< sum <<endl;
	
}
