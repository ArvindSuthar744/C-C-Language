#include<iostream>
using namespace std;
main()
{
	int arr[5]={10,20,15,10,10};	
	int i;
	int count =0;
	int sum=0;
	int a =10;
	
	for(i=0;i<5;i++)		// 0, 1, 2, 3, 4
	{
		if(arr[i] != a){
			sum += arr[i];
		}
	}
	
	cout<<"Sum: "<< sum;
		
//	cout<<"Enter Number: ";
//	cin>>a;						
	
//	for(i=0;i<5;i++)
//	{
//		count = count +i;
//	}
//	cout<<count;

}
