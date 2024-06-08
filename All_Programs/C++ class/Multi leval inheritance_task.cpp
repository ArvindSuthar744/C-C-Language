#include<iostream>
using namespace std;
class cricketer 
{
	public:
	int total_run;
	void intcar()
	{
		cout<<"Enter the total run = ";
		cin>>total_run;
	}
	void outcar()
{
	cout<<"Total run = "<<total_run<<endl;
}
};
class batsmen
{
	public:
		int best_per;
		int score;
	void intbats()
	{
		cout<<"Enter the baest = ";
		cin>>best_per;
		cout<<"Enter the score = ";
		cin>>score;
	
	}
	void outbats()
{
	cout<<"Beast = "<<best_per<<endl;
	cout<<"Score = "<<score<<endl;
}
	
};
main()
{
	cricketer crt;
	batsmen bats;

	crt.intcar();
	bats.intbats();
	bats.outbats();
	crt.outcar();
}
