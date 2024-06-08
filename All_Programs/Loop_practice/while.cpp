#include<iostream>
using namespace std;
main()
{
/*	int i;
	while(i<=10)
	{
		cout<<"Enter the number: "<< i <<endl;			// pass
		i++;
	}


	int i;
	int a;
	int sum = 0;
	
		cout<<"Enter number:"<< a <<endl;
		cin>>a;	
	
	while(i <= a)
	{		
		cout<<"Number:"<< i <<endl;						//	pass
		sum = sum + i;
		i++;
		
	}

	cout<<"Total Sum: "<<sum <<endl;



	int a;
	int i = 0;
	int sum = 0;
	int evensum = 1;
	int oddsum =2;
	
	cout<<"Enter number: "<<endl;
	cin>>a;
	
	while(i <= a)
	{
		cout<<"number: "<< i <<endl;				?// not pass
		sum = sum + i;
		evensum = i + 2;
		oddsum = oddsum + i;
		i++;
			
	}
	
	cout<<"Sum: "<< sum <<endl;
	cout<<"Evensum: "<< evensum <<endl;
	cout<<"Oddsum: "<< oddsum <<endl;



	int a;
	int i = 0;
	int evensum = 0;
	int oddsum = 0;
	int sum = 0;
	
	cout<<"Enter number: "<<endl;
	cin>>a;
	
	while(i <= a)
	{
		cout<<"Enter number: "<< i <<endl;					// Pass  
		
			if(i % 2 == 0)
		{
			evensum = evensum + i;
		}
		else 
		{
			oddsum = oddsum + i;
		}
		sum = sum + i;
		i++;
		
	}
	
	cout<<"Evensum: "<< evensum <<endl;
	cout<<"Oddsum: "<< oddsum <<endl;
	cout<<"ToatlSum: "<< sum <<endl;


	int a;
	int i;
	int sum = 0;
	
	cout<<"Enter number: ";
	cin>>a;
	
	while(i < a)
	{
		cout<<"Enter number: "<< i <<endl;				///  Pass se
		sum = sum + i;
		i++;
	
	}
	
		cout<<"TotalSum: "<< sum <<endl;
	
	
	int i;
	int a;
	int sum = 0;
	
	cout<<"Enter Start: ";
	cin>>i;
	cout<<"Enter End: ";
	cin>>a;
	
	while(i <= a)
	{
		cout<<"Number: "<< i <<endl;				/// Passs Se
		sum = sum + i;
		i++;
		
	}
		cout<<"TotalSum: "<< sum <<endl;



	int i;
	int a;
	int even = 0;
	int odd = 0;
	int evensum = 0;
	int oddsum = 0;
	int sum = 0;
	int ecount = 0;
	int ocount = 0;
	int number;
	cout<<"Enter a number:";
	cin>>a;

	
	while(i < a)
	{
		cout<<"Enter number:";
		cin>>number;
		if(i % 2 == 0)
		{
			
			evensum = evensum + i;
			ecount++;
		}
		else 
		{
			oddsum = oddsum + i;
			ocount++;
		}
		
		sum = sum + i;
		i++;
	}
	cout<<"Even: "<<ecount<<endl;
	cout<<"Odd: "<<ocount<<endl;
	cout<<"Evensum: "<< evensum <<endl;
	cout<<"Oddsum: "<< oddsum <<endl;
	cout<<"ToatlSum: "<< sum <<endl;
*/

	int i = 1;
	int a;
	int evensum = 0;
	int oddsum = 0;
	int sum = 0;
	int ecount = 0;
	int ocount = 0;
	int number;
	
	cout<<"Enter a number:";
	cin>>a;
	
	while(i <= a)
	{
		
		cout<<"Enter number:"<< i <<endl;
		
		if(i % 2 == 0)
		{
			
			evensum = evensum + i;
			ecount++;
		}
		else 
		{
			oddsum = oddsum + i;
			ocount++;
		}
		
		sum = sum + i;
		i++;
	}
	
	int j=0;
	for(j=0;j<=a; j++)
	{
		if(j%2==0)
		{
			cout<<"Even No. " << j << endl;
		}
		
	}
	
	for(int k=0;k<=a;k++)
	{
			if(k%2!=0)
			{
				cout << "Odd No." << k << endl;
			}
	}
	
	cout<<"EvenCount: "<<ecount<<endl;
	cout<<"OddCount: "<<ocount<<endl;
	cout<<"Evensum: "<< evensum <<endl;
	cout<<"Oddsum: "<< oddsum <<endl;
	cout<<"ToatlSum: "<< sum <<endl;

}
