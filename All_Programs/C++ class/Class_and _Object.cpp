#include<iostream>
using namespace std;
/*
class student
{
	public:
		int age = 25;			// data member 
};
main()
{
	student s1;
	cout<<s1.age;	
}
*/

	class student
{

	public:
		int id;					/// Data member 
		string name;
		string subject;

	void inputdata()				/// Member function 
{
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter Subject:"<<endl;
	cin>>subject;
}
	
	void displaydata()
{
	cout<<"	Student Department"<<endl;
	cout<<"Id:"<<id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Subject:"<<subject<<endl;
}

};
	class faculty
{
	public:
		int id;					/// Data member 
		string name;
		string department;

	void inputdata()				/// Member function 
{
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter Department:"<<endl;
	cin>>department;
}

	void displaydata()
{
	cout<<"	Faculty Department"<<endl;
	cout<<"Id:"<<id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Subject:"<<department<<endl;
}
};

main()
{
	//Object Creation 
	student obj;
	faculty f1;
	obj.inputdata();
	obj.displaydata();
	
	f1.inputdata();
	f1.displaydata();
}
