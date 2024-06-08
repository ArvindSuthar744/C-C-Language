#include<iostream>
using namespace std;
main()
{

	int i;
	int num;
	
	cout<<"Enter number: ";
	cin>>num;
	
	for(i = 0; i <= 10; i++)
	{
		cout<<" 2 * " << i << " = "<< i*num <<endl; 
	}
	

/*
	int i;
	int num;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	for(i = 1; i <= num; i++)
	{
		printf("\n2 *  = %d ",i,i*num);
	}
	*/
}
