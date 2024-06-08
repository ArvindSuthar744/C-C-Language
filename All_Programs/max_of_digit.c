#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int max = -111000;

    while (n>0)
    {
        int rem = n%10;
        if(rem > max){
            max = rem;
        }
        n/=10;
    }

    printf("%d", max);
}
