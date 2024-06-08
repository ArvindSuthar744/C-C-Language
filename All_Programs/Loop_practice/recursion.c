#include<stdio.h>
#include<string.h>
char name(a)
{
	char name[20];
	printf("Enter Name:");
	scanf("%s",&name);
	printf("\nReverse String: %s",strrev(name));

}
main()
{
	name();
}
