#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int n;
    int AB;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
	int i;
    for (i = 2; i <= n; i++)
    {
        AB = a + b;
        printf("%d ", AB);
        a = b;
        b = AB;
    }
}
