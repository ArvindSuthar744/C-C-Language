#include<stdio.h>
void main()
{
	int num[10];
	int evensum = 0,oddsum = 0;
	int sum = 0;
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Enter the number %d:",i+1);
		scanf("%d",&num[i]);
	
	}
	
	for (i=0;i<10;i++)
	{
		
		printf("\n Output: %d",num[i]);
		sum = sum + num[i];
	}
	
		printf("\nTotalSum:%d",sum);
		
}

