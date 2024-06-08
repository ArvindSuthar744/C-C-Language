#include<iostream>
using namespace std;
class op_overloading
{
	public:
		char str1[20];
		char str2[20];
		
		void concate()
		{
			cout<<"Enter First String : ";
			cin>>str1;
			cout<<"Enter Second String : ";
			cin>>str2;
			
			cout<<"String Concatenate : "<<str1<<str2<<endl;
		}
};
main()
{
	op_overloading op;
	op.concate();
}
