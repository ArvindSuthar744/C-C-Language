#include<stdio.h>
main () {
	int num,i,evencount,oddcount,evensum,oddsum;

	printf("Enter the 10 Num : ");
	
	for(i=1;i<=10;i++) {
		
		scanf("%d",&num);
		if(num % 2 == 0 ){
			evencount++;
			evensum = evensum + num;
		}
		else {
			oddcount++;
			oddsum = oddsum + num;
		}
	}
	
	printf("Many Even number : %d\n",evencount);
	printf("Many Odd number : %d\n",oddcount);
	printf("Evensum : %d\n",evensum);
	printf("Oddsum : %d\n",oddsum);
	
}
