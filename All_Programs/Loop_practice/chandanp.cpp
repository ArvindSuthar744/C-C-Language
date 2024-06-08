0#include<iostream>
using namespace std;
int add(int a,int b)
{
	int rpo = a + b;
	return rpo;
	
}

main()
{ int a,b;
	cout << "Enter 1 No: ";
	cin >> a;
	cout << "Enter 2 No: ";
	cin >> b; 
	int xyz = add(a,b);
	cout<<"Sum: "<< xyz;
}

/*
	int arr[5]={};
	int i;
	int add = 0;
	
	for(i = 1; i <= 5; i++){
		
		cout<<"Enter Number: ";
		cin>>arr[i];
		
		
	}
	
	
	for(i = 5; i >= 0; i--){
			
	cout<< arr[i] << " ";
	
	}
*/

	



	

