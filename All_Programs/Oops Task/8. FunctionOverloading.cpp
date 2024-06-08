#include<iostream>
using namespace std;
class claculater
{
	public:
		int num1,num2;
		
		void addition(int num1,int num2)
		{
			cout<<"Function Overloading "<<endl;	
		cout<<"Addition: "<<num1 + num2 <<endl;	
	}	
	
		void Subtraction(double num1, double num2 )
		{
		cout<<"Subtraction: "<<num1 - num2 <<endl;
		}
	
		void multipication( int num1, int num2)
		{
		cout<<"Multipiction: "<<num1 * num2 <<endl;
		}
	
		void division(float num1, float num2)
		{
		cout<<"Division: "<<num1 / num2 <<endl;
		}
};

main()
{
	claculater cl;
	cl.addition(10,20);
	cl.Subtraction(20,10);
	cl.multipication(10,5);
	cl.division(10,2);
}
