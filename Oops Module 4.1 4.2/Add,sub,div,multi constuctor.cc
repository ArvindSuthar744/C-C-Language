#include<iostream>
using namespace std;

int main()
{
	int first, second, add, subtract, multiply;
	float divide;
	
	cout<<"please enter two integer:";
	cin>>first;
	cin>>second;
	
	add = first+second;
	subtract = first - second;
	multiply = first * second;
	divide = first / second;
	
	cout<<endl<<"Addition = "<<add;
	cout<<endl<<"Subtraction = "<<subtract;
	cout<<endl<<"Multiplication = "<<multiply;
	cout<<endl<<"Division = "<<divide;
	
	return 0;
}
