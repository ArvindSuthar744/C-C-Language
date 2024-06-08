#include<iostream>
using namespace std;
class parent1
{
	public:
		void child1
		{
			cout<<"Parent 1"<<endl;
		}
};
	
class parent2
{
	public:
		void child2
		{
			cout<<"Parent 2"<<endl;
		}	
};

class son : public parent1,public parent2
{
	public:
		void son1
		{
			cout<<"Son 1"<<endl;
		}
}
main()
{
	parent p2;
p2.parent();


}
