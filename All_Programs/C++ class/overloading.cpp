#include<iostream>
using namespace std;
class calculater
{
	public:
		int a,b;
		void addition(int a , int b)
		{
			cout<<a+b<<endl;
		}
		void subtraction(float a , float b)
		{
			cout<<a-b<<endl;
		}
		void multipication(int a , int b, int c = 0)
		{
			c =a*b;
			cout<<c<<endl;
		}
		void divison(float a , float b,float d = 0) 
		{
			d =a/b;
			cout<<d<<endl;
		}
};
main()
{
	calculater c1;
	c1.addition(10,20);
	c1.subtraction(50.10f,20.10f);
	c1.multipication(10,100);
	c1.divison(50.20f,20.10f);
}
