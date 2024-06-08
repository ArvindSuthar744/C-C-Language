#include<iostream>
using namespace std;
class swapp
{
	public:
		int n1;
		int n2;
	void swapping()
	{
		cout<<"Enter First Number : ";
		cin>>n1;
		cout<<"Enter Second Number : ";
		cin>>n2;
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
		
		cout<<"Swapping First Numbers : "<<n1<<endl;
		cout<<"Swapping Second Numbers : "<<n2<<endl;

	}
};
main()
{
	swapp sp;
	sp.swapping();
}
