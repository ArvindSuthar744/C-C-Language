#include<stdio.h>
main()
{	

	int num;
	int ecount = 0;
	int ocount = 0;
	int evensum = 0;
	int oddsum = 0;
	int totalsum = 0;
	int i;
		
	for(i = 1; i <= 10; i++)
	{
		printf("\nNo.%d ",i);
		printf("Enter Number:");
		scanf("%d",&num);
		
		
		if(i /  2 == 0)
		{
			evensum = evensum + num;
			ecount++;
		}
		else
		{
			oddsum = oddsum + num; 
			ocount++;
		}
		
		totalsum = totalsum + num;
		
	}
	
		printf("\nEvenCount: %d",ecount);
		printf("\nOddCount: %d",ocount);
		printf("\nEvenSum: %d",evensum);
		printf("\nOddSum: %d",oddsum);
		printf("\nToatalSum: %d",totalsum);

/*

	int row;
	int col;
	int ch = 64;

	
	for(row = 1; row <= 5; row++)
	{
		for(col = 1; col <= row; col++)				/// Passs Se
		{
			ch++;
			printf("%c",ch);
			
		}
		
		printf("\n");
	
	} 



	int row;
	int col;
	int sum = 0;
	for(row = 1; row <= 5; row++)
	{
		for(col = 1; col <= row; col++)				/// Pass Se
		{
			
			printf("%d",row);

		}
		
		printf("\n");
	
	}

*/

















		
}
