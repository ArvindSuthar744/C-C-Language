#include<iostream>
using namespace std;
class grandfather
{
	public :
	void land()
	{
		cout<<"100 Acres of land"<<endl;
	}
};
	class father 
	{
		public:
		void house()
		{
			cout<<"5 bhk house"<<endl;
		}
	};

	class son : public father,public grandfather
	{
		public:
		void car()
	{
		cout<<"Audi car";
	}
};
main()
{
	son obj;
	obj.land();
	obj.house();
	obj.car();


}
