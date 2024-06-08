#include<iostream>
using namespace std;
class house1
{
	public:
	void ghar1()
	{
		cout<<"	Godan"<<endl;
	}
};

class house2
{
	public:
	void ghar2()
	{
		cout<<"	Ahore"<<endl;
	}
};

class house3 : public house1, public house2
{
	public:
	void ghar3()
	{
		cout<<"	Mandwala"<<endl;
	}
};

main()
{
	house3 h1;
	h1.ghar1();
	h1.ghar2();
	h1.ghar3();
}
