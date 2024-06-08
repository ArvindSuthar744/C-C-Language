#include<stdio.h>
main()
{
	int num;
	int sum = 0;
	int evensum = 0;
	int oddsum =0;
	
	for(int i = 1; i <=num; i++){
		
		printf("\nEnter the number:");
		scanf("%d",&num);
	}

	for(int i = 1; i <=5; i++)
	{
		printf("\nEnter the number:");
		scanf("%d",&num);
		
		if(i % 2 == 0){
			evensum = evensum + i;
		}
		else {
			oddsum=oddsum+i;
		}
	}
		printf("\nevensum === %d",evensum);
		printf("\noddsum == %d",oddsum);
		printf("\nSum %d",evensum + oddsum);

}
