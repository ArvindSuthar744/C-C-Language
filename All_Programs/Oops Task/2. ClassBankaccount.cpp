#include<iostream>
using namespace std;
class Bankaccount
{
	public:
		string NameDepositor;
		int AccountNumber;
		string AccountType;
		int BalanceAmount;
		int Assignvalues;
		int depositedamount;
		int withdrawamount;
		string Name;
		int value1;
		int value;
		
	void inputdata()
	{
		cout<<"Enter NameDepositor: ";
		cin>>NameDepositor;
		cout<<"Enter AccountNumber: ";
		cin>>AccountNumber;
		cout<<"Enter AccountType: ";
		cin>>AccountType;
		cout<<"Enter BalanceAmount: ";
		cin>>BalanceAmount;
		
	}
	
	void inputdata2()
	{
		cout<<"Enter Assign Values: ";
		cin>>Assignvalues;
		cout<<"Enter Deposited Amount: ";
		cin>>depositedamount;
		cout<<"Enter Withdrawamount: ";
		cin>>withdrawamount;
		cout<<"Enter Name: ";
		cin>>Name;
	
	}
	
	void displaydata()
	{
		cout<<"\nNameDepositor: "<<NameDepositor<<endl;
		cout<<"AccountNumber: "<<AccountNumber<<endl;
		cout<<"AccountType: "<<AccountType<<endl;
		cout<<"BalanceAmount: "<<BalanceAmount<<endl<<endl;
		cout<<"Assign Values: "<<Assignvalues<<endl;
		cout<<"Deposited Amount: "<<depositedamount<<endl;
		value1 = BalanceAmount + depositedamount;
		cout<<"Withdrawamount: "<<withdrawamount<<endl;
		value = value1 - withdrawamount;
		cout<<"Total Balance: "<<Name<<"	"<<value<<endl;

	}	
};

main()
{
	Bankaccount ac;
	ac.inputdata();
	ac.inputdata2();
	ac.displaydata();
}
