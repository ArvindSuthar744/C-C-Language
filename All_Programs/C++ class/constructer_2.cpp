#include<iostream>
using namespace std;
class number
{
	public:
	int a,b;
	
	void inputdata(int a,int b)
	{
		this->a = a;		// this-> is se a kon sa vala hai pata salata hai
		this->b= b;
	}
	void displaydata(int p,int q)
	{
		cout<<"p = p"<<p<<endl;
		cout<<"q = q "<<q<<endl;
	}
};

main()
{
	number n1;
	n1.inputdata(20,30);
	n1.displaydata(40,50);	
}
