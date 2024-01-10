#include<stdio.h>
main()
{
	float principal,rate,time;
	float interest;
	printf("Enter the principal of interest:");		// simple interest formula (p*r*t)/100
	scanf("%f",&principal);
	printf("Enter the rate of interest:");
	scanf("%f",&rate);
	printf("Enter the time of interest:");
	scanf("%f",&time);
	
	interest = (principal*rate*time)/100;
	
	printf("The simple interest of : %f",interest);
	
}
