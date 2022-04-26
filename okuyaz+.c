#include <stdio.h>

int main() {
	
	int A[5];
	int i;
	int top = 0;
	
	printf("5 eleman gir: \n");
	
	for (i=0; i<5; i++) 
		scanf("%d",&A[i]);
		
	printf("SUNLAR GIRILDI:\n");
	
	for (i=4; i>=0; i--)
		printf("%d\t",A[i]);
	printf("\n");
	
	for (i=0; i<5; i++)
		top+=A[i];
		
	printf("Toplam = %d\n",top);	
	
	return 0;
}



