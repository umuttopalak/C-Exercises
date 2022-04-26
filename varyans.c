#include <stdio.h>

int main() {
	

	int A[10];
	float var = 0.0;
	float ort = 0.0;
	int i;
	
	for (i=0; i < 10; i++) {
		printf("Sayi gir: ");
		scanf("%d",&A[i]);
		ort += A[i];
	}
	
	ort/=10;
	
	for (i=0; i<10; i++)
		var += (ort-A[i])*(ort-A[i]);
	
	var/=9;
	
	printf("Varyans = %.2f\n",var);
	
	
	return 0;
}
