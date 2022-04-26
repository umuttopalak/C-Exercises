#include <stdio.h>

int main() {
	
	int i, j;
	int n;
	
	do {
		printf("Kac satir: ");
		scanf("%d",&n);
	} while (n<1);
	
	for (i=0; i<n; i++) {
		for (j = 0; j < n-i-1; j++)
			printf(" ");
		for (j = 0; j < 2*i+1; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
