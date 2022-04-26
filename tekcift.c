#include <stdio.h>
#define MAX 30

int main() {
	
	int A[MAX], TEK[MAX], CIFT[MAX],n,i, tindex = 0, cindex = 0;
	
	do {
		printf("Kac sayi: ");
		scanf("%d",&n);
	}
	while (n > MAX || n < 1);
	
	for (i=0; i<n; i++) {
		printf("%d. sayi: ", i+1);
		scanf("%d",&A[i]);
	}
	
	for (i=0; i<n; i++)
		if (A[i] % 2)
			TEK[tindex++] = A[i];
		else
			CIFT[cindex++] = A[i];
		
	/*CIKTILA*/
			
	printf("A dizisi: \n");		
	for (i=0; i<n; i++)
		printf("%d ",A[i]);
	printf("\n");
	
	printf("TEK dizisi: \n");		
	for (i=0; i<tindex; i++)
		printf("%d ",TEK[i]);
	printf("\n");
	
	printf("CIFT dizisi: \n");		
	for (i=0; i<cindex; i++)
		printf("%d ",CIFT[i]);
	printf("\n");
	
	return 0;
}
