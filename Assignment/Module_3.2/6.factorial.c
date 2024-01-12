#include<stdio.h>
main() {
	int i,num,fact=1;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--) {
		
		fact = fact * i;
		
	}
	printf("Factorial : %d",fact);
	
	
}
