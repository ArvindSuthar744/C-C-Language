#include<stdio.h>
int num()
{
	int n[5];
	int i;
	int sum = 0;
	int count = 0;
	
	for(i = 1; i <= 5; i++)
	{
		printf("Enter Number%d:",i);
		scanf("%d",&n);
		sum += n[i];
		count++;
	}
	printf("Sum: %d",sum);
}

main()
{
	num();
}
