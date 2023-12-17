#include <stdio.h>
int main() {
    int num, firstnum, lastnum, sum;

    printf("Enter a number: ");
    scanf("%d",&num);

    lastnum = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstnum = num;

    sum = firstnum + lastnum;

    printf("first and last Sum : %d\n",sum);

    return 0;
}
