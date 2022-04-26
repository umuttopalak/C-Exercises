#include <stdio.h>
#define MAX 30

int main() {
	
	int A[MAX];
	int n, i;
	int min, max;
	
	do {
		printf("Kac sayi: ");
		scanf("%d",&n);
	}
	while (n > MAX || n < 1);
	
	for (i=0; i<n; i++) {
		printf("%d. sayi: ", i+1);
		scanf("%d",&A[i]);
	}
	
	if (n == 1) {
		min=A[0];
		max=min;
	}
	else {
		if (A[0] > A[1]) {
			max= A[0];
			min = A[1];
		}
		else {
			max = A[1];
			min = A[0];
		}
		for (i=2; i<n; i++)
			if (A[i] < min)
				min = A[i];
			else if (A[i] > max)
				max = A[i]; 
	}
	
	printf("Min = %d\tMax = %d\n",min,max);

	return 0;
}
