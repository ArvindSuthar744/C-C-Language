#include <stdio.h>
int main()
{
    int n;
    int i,j,k;
    printf("Enter number: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    

}