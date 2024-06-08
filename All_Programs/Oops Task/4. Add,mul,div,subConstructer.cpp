#include<iostream>
using namespace std;
class addition
{
	public:
		int num1;
		int num2;
		int num;
	void inputdata()
	{
		cout<<"Enter Number1:";
		cin>>num1;
		cout<<"Enter Number2:";
		cin>>num2;
		cout<<"Enter Operation (add,sub,mul,div): ";
		cin>>num;
	}
	
	void displaydata()
	{
		int add;
		int sub;
		int div;
		int mul;
		
		if(num == add ==0)
		{
			cout<<"Addition: "<<num1 + num2;
		}
		else if (num == sub ==0)
		{
			cout<<"Subtraction: "<<num1 - num2;
		}
		else if(num == mul ==0)
		{
			cout<<"Multipation: "<<num1 * num2;
		}
		else if(num == div ==0)
		{
			cout<<"Division: "<<num1 / num2;
		}
	}
	
};

main()
{
	addition add;
	add.inputdata();
	add.displaydata();
}
