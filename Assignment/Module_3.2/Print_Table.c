#include<stdio.h>
main()
{
	int num1;
	int i;
	int evensum =0 ,oddsum = 0;
	
	for(i=1;i<=10;i++) {
		
		printf("\nEnter the Number %d : ",i);
		scanf("%d",&num1);
		
		if (num1 % 2 ==0) {
			printf("Even");
			evensum = evensum + num1;
		}
		else {
			printf("Odd");
			oddsum = oddsum + num1;
		}
	}
	printf("\nSum of Even Number : %d",evensum);
	printf("\nSum of Odd Number : %d",oddsum);
	
}
//	int num,i;
//	printf("Enter the number:");
//	scanf("%d",&num);
//	
//	for(i=1;i<=10;i++)
//	{
//		printf("\nTable %d",num*i);
//		
//	}
/*
	int a = 972;
	int b = 897;
	int i;
	
	for(a = 972; a >= b; a--)				///Pass se
	{
		cout<< a  <<endl;
	}
		
	int i;
	for(i = 1; i <= 10; i++)					/// Passs
	{
		cout<< i <<endl;
	}
	
*/

