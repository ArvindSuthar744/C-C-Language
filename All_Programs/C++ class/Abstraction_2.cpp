#include<iostream>
using namespace std;
class abstractiondemo
{
	private:
	int x,y;
	public:
	void add()
	{
		cout<<"Enter the velue of x and y:"<<endl;
		cin>>x>>y;
		cout<<"Sum:"<<x+y;
	}
};
main()
{
	abstractiondemo ad;
	ad.add();
}
