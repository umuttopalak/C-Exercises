#include <stdio.h>

int main() {
	
	int A[5], B[5];
	int i;
	
	printf("5 eleman gir: ");
	
	for (i=0; i<5; i++)
		scanf("%d",&A[i]);
	
	printf("A sudur: \n");	
	for	(i=0; i<5; i++) {
		printf("%d\t",A[i]);
		B[i] = A[i];
	}
	printf("\n");
		
	printf("B sudur: \n");	
	for	(i=0; i<5; i++)
		printf("%d\t",B[i]);
	
	return 0;
}
