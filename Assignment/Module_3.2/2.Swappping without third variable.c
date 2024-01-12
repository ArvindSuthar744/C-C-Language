#include<stdio.h>
main () {
	int a =10, b=20;
	printf("a is %d  b is %d",a,b);
	a= a+b;// 10+20 = 30
	b= a-b;//30-20 = 10 
	a= a-b;//30-10 = 20 
	printf("\na is %d  b is %d",a,b);
	
}
