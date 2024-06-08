#include<iostream>
using namespace std;
class parent
{
	public:
		void parent()
		{
			cout<<"\nThis is Parents";
		}
};

class child1
{
	public: 
		void ch1()
		{
			cout<<"\nChild_1";	
		}	
};

class child2
{
	public:
		void ch2()
		{
			cout<<"\nChild_2";
		}	
};	

class all : public parent, public child1, public child2
{
	public:
	void courses()
	{
		cout<<"\nAll_Courese";
	}
};
main()
{
	all ad;
	ad.parent();
	ad.child1();
	ad.child2();
	ad.courses();
}
