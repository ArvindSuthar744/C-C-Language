#include<stdio.h>
int main () {
	int reverse,num = 64728;
	printf("Number : %d",num);
	printf("\nReverse Number : ");
	int i;
	for(i=0;i<=num;i++) {
		
		reverse = num % 10;
		printf("%d",reverse);
		num = num /= 10;
		
	}
	return 0;
}
