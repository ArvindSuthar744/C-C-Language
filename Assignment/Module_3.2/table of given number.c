#include<stdio.h>
main() {
	int num1,table;
	int i,j;
	
		printf("Enter the Number of Table : ");
		scanf("%d",&num1);
		printf("Table of : %d",num1);
		
	for(i=1;i<=10;i++) {
		table = num1 * i;
		printf("\n%d",table);
	}
	
}
