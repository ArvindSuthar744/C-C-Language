#include<stdio.h>
int main () {
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);
	
	(num % 2 == 0) ? (printf("Even")) : (printf("Odd"));
	
	return 0;
}