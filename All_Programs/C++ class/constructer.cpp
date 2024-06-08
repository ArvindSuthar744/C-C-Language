#include<iostream>
using namespace std;
class sum
{
	public:				// Access specifier
	sum()				// Constructer
	{
		cout<<"Welcome to Constructer"<<endl;	
	}
	sum (int a, int b)
	{
		cout<<"A = "<<a;
		cout<<"\nB = "<<b<<endl;
	}	
};
	
main()
{
	sum s1;
	sum (10,20);
}
