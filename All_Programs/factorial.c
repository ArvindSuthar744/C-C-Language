w#include<stdio.h>
main()
{
	int n,i,f = 1;

	printf("Enter Number 1 to 9 :");

	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		f= f * i;
		
	}
		printf("\nFactorial:%d ",f);
		
}

