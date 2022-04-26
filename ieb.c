#include <stdio.h>
#define MAX 30

int main() {

	int A[MAX];
	int n, i;
	int ek, ek2;

	do {
		printf("Kac sayi: ");
		scanf("%d",&n);
	} while (n > MAX || n < 1);

	for (i=0; i<n; i++) {
		printf("%d. sayi: ", i+1);
		scanf("%d",&A[i]);
	}

	if (n == 1) {
		ek = A[0];
		ek2 = ek;
	} 
	else {
		if (A[0] > A[1]) {
			ek = A[1];
			ek2 = A[0];
		} else {
			ek = A[0];
			ek2 = A[1];
		}
		for (i=2; i<n; i++)
			if (A[i] < ek) {
				ek2 = ek;
				ek = A[i];
			}
			else if (A[i] < ek2)
				ek2 = A[i];
	}
	
	printf("EK = %d\tEK2 = %d\n",ek,ek2);

	return 0;
}
