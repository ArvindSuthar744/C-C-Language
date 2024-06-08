#include<iostream>
using namespace std;
class calculate
{
	public:
		int area;						
		int breath;

	void Rectangle()
	{
		cout<<"Enter the Area : ";
		cin>>area;
		cout<<"Enter the Breath : ";
		cin>>breath;
		cout<<"Area of Rectangle : "<<area * breath<<endl;
	}
	
	void Triangle()
	{
		cout<<"Enter the Area : ";
		cin>>area;
		cout<<"Enter the Breath : ";
		cin>>breath;
		cout<<"Area of Triangle : "<<(area * breath )* 1/2 <<endl;
	}
	
	void Circle()
	{
		int pi = 3.14;
		cout<<"Enter the Area : ";
		cin>>area;
		cout<<"Enter the Breath : ";
		cin>>breath;
		cout<<"Area of Circle : "<<pi * (area * breath )<<endl;
	}
};
main()
{
	calculate cal;
	cal.Triangle();
	cal.Rectangle();
	cal.Circle();
}
/*
	 Rectangle: Area * breadth 
 	Triangle: ½ *Area* breadth 
 	Circle: Pi * Area *Area
*/












