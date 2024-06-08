#include<iostream>
using namespace std;
main()
{
	int arr[5]={15,5,90,20,50};
	int i;
	int min = 10000000;
	
	for(i=1;i<5;i++)
	{
		if(arr[i]<min)
		{
			min= arr[i];
		}
	}
	cout<<"Minimum: "<<min;
}

// i>arr[i]
