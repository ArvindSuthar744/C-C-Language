#include <stdio.h>
int main() {
	
    int number,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
    	
        sum = sum + number % 10;
        number /= 10;
    }
    printf("Summation Number : %d\n",sum);
    return 0;
}
