#include<iostream>
using namespace std;
template <class T>
void swapping (T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}
main()
{
	char a='A',b='B';
	int x=20,y=30;
	
	cout<<"Before Swapping: "<<a<<" "<<b<<endl;
	swapping(a,b);
	cout<<"After Swapping: "<<a<<" "<<b<<endl;
	
	cout<<"Before Swapping: "<<"X:"<<x<<" Y:"<<y<<endl;
	swapping(x,y);
	cout<<"After Swapping: "<<"X:"<<x<<" Y:"<<y<<endl;
	
}
