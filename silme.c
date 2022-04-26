#include <stdio.h>
#define MAX 30

int main() {
	
	int A[MAX];
	int n, i, index;
	
	do {
		printf("Kac sayi: ");
		scanf("%d",&n);
	}
	while (n > MAX || n < 1);
	
	for (i=0; i<n; i++) {
		printf("%d. sayi: ", i+1);
		scanf("%d",&A[i]);
	}
	
	do {
		printf("Kacinci eleman silinsin: ");
		scanf("%d",&index);
	}
	while (index < 1 || index > n); 
	
	index--;
	
	/*CIKTILA*/
			
	printf("ESKI A dizisi: \n");		
	for (i=0; i<n; i++)
		printf("%d ",A[i]);
	printf("\n");
	/**********/
	
	/*SILME*/
	
	for (i=index+1; i<n; i++)
		A[i-1] = A[i];
		
	/*CIKTILA*/
			
	printf("YENI A dizisi: \n");		
	for (i=0; i<n-1; i++)
		printf("%d ",A[i]);
	printf("\n");
	
	/********/
	
	return 0;
}
