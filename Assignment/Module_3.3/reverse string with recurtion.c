#include<stdio.h>
int main () {
	char str;
	printf("Enter the String : ");
	scanf("%s",&str);
	
  if (str)
  {
    reverse(str + 1);
    printf("%c",str);
  }
  return 0;
}
