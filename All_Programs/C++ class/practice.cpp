#include<iostream>
using namespace std;
class class1
{
	public:
	void book()
	{
		cout<<"Book_1"<<endl;
	}
};
class class2
{
	public:
	void theory()
	{
		cout<<"Theory 2"<<endl;
	}
};

class course: public  class1, public  class2
{
	public:
	void java()
	{
		cout<<"Java fullstack"<<endl;
	}
};
main()
{
	course c1;
    c1.book();
    c1.theory();
    c1.java();
}