#include <stdio.h>
#define MAX 30

int main() {
	
	int A[MAX];
	int n, i, eleman;
	int tamorasi = -1;
	
	do {
		printf("Kac sayi: ");
		scanf("%d",&n);
	}
	while (n > MAX-1 || n < 1);
	
	for (i=0; i<n; i++) {
		printf("%d. sayi: ", i+1);
		scanf("%d",&A[i]);
	}
	
	printf("Eklemek istedigin eleman: ");
	scanf("%d",&eleman);
	
	/*CIKTILA*/
			
	printf("ESKI A dizisi: \n");		
	for (i=0; i<n; i++)
		printf("%d ",A[i]);
	printf("\n");
	/**********/
	
	for (i=0; i<n; i++)
		if (eleman < A[i]) {
			tamorasi = i;
			break;
		}
	
	if (tamorasi == -1)
		A[n] = eleman;
	else {
		for (i = n-1; i >= tamorasi; i--)
			A[i+1] = A[i];
		A[tamorasi] = eleman;
	}
	
	/*CIKTILA*/
			
	printf("YENI A dizisi: \n");		
	for (i=0; i<n+1; i++)
		printf("%d ",A[i]);
	printf("\n");
	
	/********/
	
	return 0;
}  
