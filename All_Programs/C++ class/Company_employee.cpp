#include<iostream>
using namespace std;
class company
{
	public:							// Access specifier
	string name;
	string address;
	int sales;
	int turnover;

	void inputdata()
	{
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the Address:"<<endl;
		cin>>address;
		cout<<"Enter the Sales:"<<endl;
		cin>>sales;
		cout<<"Enter the Turnover:"<<endl;
		cin>>turnover;
	}
	
	void displaydata()
	{
		cout<<"	Company Details"<<endl;
		cout<<"	Name:"<<name<<endl;
		cout<<"	Address:"<<address<<endl;
		cout<<"	Sales:"<<sales<<endl;
		cout<<"	Turnover:"<<turnover<<endl;
	}
};

class employee
{
	public:
	int id;
	string name;
	string department;
	int salary;
	int bonus;

	void inputdata()
	{
		cout<<"Enter the id:"<<endl;
		cin>>id;
		cout<<"Enter the Name:"<<endl;
		cin>>name;
		cout<<"Enter the Department:"<<endl;
		cin>>department;
		cout<<"Enter the Salary:"<<endl;
		cin>>salary;
		cout<<"Enter the Bonus:"<<endl;
		cin>>bonus;
	}
	
	void displaydata()
	{
		cout<<"	Employee Details"<<endl;
		cout<<"	Id:"<<id<<endl;
		cout<<"	Name:"<<name<<endl;
		cout<<"	Department:"<<department<<endl;
		cout<<"	Salary:"<<salary<<endl;
		cout<<"	Bonus:"<<bonus<<endl;
	}
};

	main()
{
	company c1;
	employee e1;

	c1.inputdata();
	c1.displaydata();

	e1.inputdata();
	e1.displaydata();
	
}
