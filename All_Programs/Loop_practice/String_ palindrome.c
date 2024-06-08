#include<stdio.h>
main()
{
	char str1[20],str2[20];
	
	printf("Enter String: ");
	scanf("%s",&str1);
	printf("Enter String: ");
	scanf("%s",&str2);
//	printf("\nReverse String:%s",strrev(str1,str2));

	if(strcmp(str1,str2)==0)
	{
		printf("\nString is Palindrome:");
	}
	else {
		printf("\nString is Not Palindrome:");
	}
	
}
