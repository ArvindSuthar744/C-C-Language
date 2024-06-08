#include<iostream>
using namespace std;
class parent
{
	public:
	void moblie()	
	{
		cout<<"Sumsung S23 Phone"<<endl;
	}
};

class child : public parent
{
	public:
		void moblie()
		{
			parent::moblie();					//Scope resolution opreter
			cout<<"Sumsung galaxy A50"<<endl;
		}
};

main()
{
	child mo;
	mo.moblie();
}
