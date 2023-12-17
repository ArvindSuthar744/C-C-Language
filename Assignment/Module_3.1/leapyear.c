#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year : ");
	scanf("%d",&year);
	
	if(year % 400 == 0)
	{
		printf("This year is a Leapyear");
	}
	else if (year % 100 == 0)
	{
		printf("This year is a not Leapyear");
	}
	else if (year % 4 == 0)
	{
		printf("This year is a Leapyear");
	}
	else{
		printf("This year is not leapyears : ");
	}
}
