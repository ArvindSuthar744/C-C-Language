#include<stdio.h>
main()
{
	int i;
	int j;
	char ascci = 'A';
	
	for(i = 65; i <= 69; i++)
	{
		for(j = 65; j <= i; j++)
		{
			
			printf("%c",j);
			//ascci++;
		}
		printf("\n");
	}
}
