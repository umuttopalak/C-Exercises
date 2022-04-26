#include <stdio.h>

int main() {
	
	int A[10] = {97, 1, 1, 1, 1, 1, 1 ,1, 1,97};
	int i, j;
	int tekil;
	
	for (i = 0; i<10; i++) {
		if (A[i] != -1) {
			tekil = 1;
			for (j=i+1; j<10; j++)
				if (A[i] == A[j]) {
					tekil = 0;
					A[j] = -1;
				}
			if (tekil)
				printf("%d\n", A[i]);
			A[i]=-1;
		}
	}
	
	return 0;
}
