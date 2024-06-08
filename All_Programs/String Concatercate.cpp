#include<iostream>
using namespace std;
class strn
{
	public:
		char str1;
		char str2;
		
	void concatenate1()
		{
			cout<<"String Concatenate: "<<strcat(str1,str2)<<endl;	
		}
};
main()
{
	strn st;
	st.concatenate1("a");
	st.concatenate2("A");
}
