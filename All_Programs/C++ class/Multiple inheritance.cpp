#include<iostream>
using namespace std;
class papa1
{
	public:
	void house()
	{
		cout<<"5 Bhk house"<<endl;	
	}
};

	class papa2
	{
		public:
		void shop ()
		{
			cout<<"Kirana shop"<<endl;
		}
};
	
   class son : public papa1,public papa2
	{
		public:
		void car()
		{
			cout<<"Maruti car"<<endl;
		}	
};
	
main()
{	
	son s1;
	s1.house();
	s1.shop();
	s1.car();
}
