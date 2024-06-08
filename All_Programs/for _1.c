#include<stdio.h>
main()
{
	int a,i;
	int sum = 0;

	printf("Enter the number:");
	scanf("%d",&a);
	
	for (i=0;i<=a;i++)
	{
	
		printf("\nnumber: %d",i);
		sum = sum + i;
	}
	
	printf("\nTotalSum:%d ",sum);
	
}
