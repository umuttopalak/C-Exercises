#include <stdio.h>

int main() {
	
	int i, j;
	
	for (i = 1; i < 11; i++)
		for (j = 1; j < 11; j++)
			printf("%d x %d = %d\t",j,i,i*j);
		printf("\n");
	printf("\n");
	
	
	return 0;
}
