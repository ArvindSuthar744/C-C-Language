#include<iostream>
using namespace std;
class claculater
{
	public:
		int number1;
		int number2;
		char op;
	void inputdata()
	{
		cout<<"Enter Number1:";
		cin>>number1;
		cout<<"Enter Number2:";
		cin>>number2;
		cout<<"+ ,- ,/ ,* ";
		cout<<"Enter Operation:";
		cin>>op;
			switch(op)
			{
				case '+':
					{
						cout<<"Add: "<<number1 + number2;
						break;
					}
					case '-':
					{
						cout<<"Sub: "<<number1 - number2;
						break;
					}
					case '/':
					{
						cout<<"Div: "<<number1 / number2;
						break;
					}
					case '*':
					{
						cout<<"Mul: "<<number1 * number2;
						break;
					}
			}
		
	}
	
};

main()
{
	claculater op;
	op.inputdata();
	
	
}
