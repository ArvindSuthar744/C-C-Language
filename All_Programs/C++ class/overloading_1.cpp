#include<iostream>
using namespace std;
class overloadingDemo
{
	public:
		void add(int a ,int b)
		{
			cout<<a + b <<endl;
		}
		void add(float a, float b)
		{
			cout<<a + b<<endl;
		}
};

main()
{
	overloadingDemo odd;
	odd.add(10,40);
	odd.add(20.10f,30.10f);
}
