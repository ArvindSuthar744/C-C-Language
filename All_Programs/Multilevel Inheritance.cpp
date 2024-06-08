#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
	void namedata()
	{
		cout<<"Name : "<<name<<endl;
	}
	void agedata()
	{
		cout<<"Age : "<<age<<endl;
	}
};
class students
{
	public:
		int percentage;
	void percentagedata()
	{
		cout<<"Percentage : "<<endl;
	}
};

class teacher :public students, public  person
{
	public:
		int salary;
		void salarydata()
		{
			cout<<"Salary : "<<salary<<endl;
		}
};

main()
{
	teacher tc;
	tc.namedata(jan);
	tc.agedata(20);
	tc.percentagedata(10);
	tc.salarydata(5000);
	
}




