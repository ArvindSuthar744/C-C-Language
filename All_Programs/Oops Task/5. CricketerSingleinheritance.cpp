#include<iostream>
using namespace std;
class cricketer
{
	public:
	void batsman()
	{
		int totalrun;
		float avg;
		int averagerun;
		string performance;

		cout<<"Total Run: ";
		cin>>totalrun;
		avg = totalrun/10;
		cout<<"Average Run: "<<avg<<endl;
		cout<<"Best Performance: ";
		cin>>performance;
		
		cout<<"\nBatsman Details"<<endl;
		cout<<"Total Run: "<<totalrun <<endl;
		cout<<"Average Run: "<< averagerun <<endl;
		cout<<"Best Performance: "<< performance <<endl;
	}
	
};

main()
{
	cricketer ck;
	ck.batsman();
	
}

