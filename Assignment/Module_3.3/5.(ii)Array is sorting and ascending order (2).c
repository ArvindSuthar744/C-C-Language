#include<stdio.h>
int main () {
	int num[10],i,j,swap;
	printf("Enter the Num : ");
	
	for(i=0;i<5;i++) {
		
		scanf("%d",&num[i]);
	}
	printf("Beforce sorting array : \n",num[i]);
	for(i=0;i<5;i++) {
		
		printf("%d",num[i]);
	}
	for(i=0;i<5;i++) {
		
		for(j=i+1;j<5;j++) {
			
			if(num[i] < num[j]) {
				
				swap = num[i] ;
				num[i] = num[j] ;
				num[j] = swap ;
			}			
		}
	}
	printf("After sorting Asecnding order : ");
	
	for(i=0;i<5;i++) {
		
		printf("%d ",num[i]);
	}
	return 0;
}

