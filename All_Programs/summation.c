#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;

    while (n>0)
    {
        int rem = n%10;
        sum +=rem;
        n/=10;
    }

    printf("%d", sum);
    

}