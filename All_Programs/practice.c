#include<stdio.h>
main()
{
/*
	int n;
	int i = 1;
	int sum = 0;
	printf("Enter the number:");
	scanf("%d",&n);

	while (i <= n)
	{
		printf("\n%d",i);
		sum = sum + i;
		i = i +1;
}
		printf("\nTotal: %d",sum); 

*/
	int num;
	printf("Enter:");
	scanf("%d",&num);
	int count = 0;
	int row = 1;
	while (row <= num){
	
	 int col = 1;
		while (col <= row)
		{
			count = row + 1;
			printf("%d",row);
			col = col + 1;
				
		}
			printf("\n");
			row = row + 1;
	}

/*
	int row = 1;
	int col = 1;
	int n;
	
	while (row < n )
	{
		printf("Enter number:");
		scanf("%d",n);
		printf("Enter number: ",row);
		
		while (col <= row)
		{	

		printf("\n %d",row);
		col = col + 1;
	
		}
	printf("\n ");
	row = row + 1;
	}
*/
}
