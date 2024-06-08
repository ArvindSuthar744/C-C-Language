#include<iostream>
using namespace std;
	class student
{

	public:						// Access specifier
		int id;					/// Data member 
		string name;
		string subject;
		
	void setID(int id)
	{
		cout<<"ID: ";
		this->id = id;
	}
	int getID()
	{
		return this->id;	
	}
	void setName(string name)
	{
		cout<<"Name: ";
		this->name = name;
	}
	string gatName()
	{	
		return this->name;
	}
	void setSubject(string subject)
	{
		cout<<"Subject: ";
		this->subject = subject;
	}
	string getSubject()
	{
		return this->subject;
	}
};

main()
{
	student s1;
	s1.setID(1024);
	cout<<s1.getID()<<endl;
	
	s1.setName("Arvind");
	cout<<s1.gatName()<<endl;

	s1.setSubject("Computer");
	cout<<s1.getSubject()<<endl;
}
