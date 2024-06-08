#include<iostream>
using namespace std;
main()
{
	int i;
	int arr1[5]={};
	int arr2[5]={};
	
	for(i=0;i<5;i++){
		
		cout<<"Enter Number1:";
		cin>>arr1[i];
		cout<<"Enter Number2:";
		cin>>arr2[i];	
		
	}
		for(i=0;i<5;i++){
			
			cout<<"Arry1: "<< arr1[i]<<endl;
			cout<<"Arry2: "<< arr2[i]<<endl;
		}
	
}
