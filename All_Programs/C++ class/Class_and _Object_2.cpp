#include<iostream>
using namespace std;
	class faculty
{
	public:
		int id;					/// Data member 
		string name;
		string department;

	void inputdata()				/// Member function 
{
	cout<<"Enter Id:";
	cin>>id;
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Department:";
	cin>>department;
}

	void displaydata()
{
	cout<<"Id:"<<id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Subject:"<<department<<endl;
}
};

main()
{
	faculty f1;
	f1.inputdata();
	f1.displaydata();
}

