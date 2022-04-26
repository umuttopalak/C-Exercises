#include <stdio.h>

int main() {
	
	int A[10] = {10, -1, -1, -1, -1 , -1 ,-1, -1 ,-1 ,-1};
	int i, j;
	int sayac;
	
	for (i=0; i<10; i++) {
		if (A[i] != -1) {
			sayac = 1;
			for (j=i+1; j<10; j++)
				if (A[j] == A[i]) {
					sayac++;
					A[j] = -1;
				}
			if (sayac > 1)
				printf("%d elemani %d kere gruldu\n",A[i],sayac);
			A[i] = -1;	
		}
		
		
		
	}
		for(i = 0; i < 10 ; i ++)
		printf("%d\t",A[i]);
	return 0;
}
