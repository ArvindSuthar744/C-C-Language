#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    
    int max = -111000;
    while (num > 0)
    {
        int rem = num % 10;
        if(rem > max) {
            max = rem;
        }
        num /= 10;
    }
    printf("%d", max);
    return 0;
}
