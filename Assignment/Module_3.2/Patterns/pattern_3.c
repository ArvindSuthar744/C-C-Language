#include <stdio.h>
int main()
{
    int i,j;
    int assci = 64;

    for(i=0; i<7; i++)
	{
        for(j=0; j<=i; j++)
		{
            assci++;
            printf("%c ", assci);
        }
        
        printf("\n");
        
    }

}
