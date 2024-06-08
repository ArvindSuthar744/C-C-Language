#include<stdio.h>
main()
{
    char a = 'A';						/// uesr choice number,character
    if (a >= 97 && a <= 122)
    {
    	
        printf("Lowercase a to z ");
        
    }
    else if (a >= 65 && a <= 90)
    {
    	
        printf("Uppercase A to Z ");
        
    }
    else 
    {
    	
       printf("Numeric 0 to 9 ");
       
    }
    
}
