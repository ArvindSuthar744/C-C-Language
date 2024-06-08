#include<iostream>
using namespace std;
class matrix
{
	public:
		int arr1[7]={4,5,6,7,8,9};
		int arr2[7]={4,8,5,3,2,1};
		int i;
		int c[6];
		int sum =0;
		void add()
		{
			cout<<"1D First Matrix Operater Overloading"<<endl;
			for(i=0;i<6;i++)
			{
					cout<<	arr1[i]<<endl;
			}
			
			cout<<"1D Second Matrix Operater Overloading"<<endl;
			for(i=0;i<6;i++){
				
				cout<<	arr2[i]<<endl;
				
			}
		//	cout<<"Sum two matrix : "<<arr1[i]+arr2[i];
		
		for(i = 0;i<6;i++){	
			
			c[i] = arr1[i] + arr2[i];
			cout<<"Sum matrix "<< i <<" : "<< c[i] <<endl;
		}
		//	cout<<"Sum two matrix : "<< c[i];
	}
};

main()
{
	matrix mt;
	mt.add();
}
