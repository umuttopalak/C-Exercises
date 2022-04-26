#include <stdio.h>

int main() {
	
	int A[10];
	int i;
	
	for (i=0; i<10; i++) {
		printf("Sayi gir: ");
		scanf("%d",&A[i]);
	}
	
	for (i=0; i<5; i++)
		if (A[i] != A[9-i])
			break;
			
	if (i==5)
		printf("Simetrik\n");
	else
		printf("Simetrik degil\n");		
	
	return 0;
}
