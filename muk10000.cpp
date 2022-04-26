#include <stdio.h>

int main() {
	
	long i, j;
	int boltop;
	
	for (i=3; i<=100000; i++) {
		boltop = 1;
		for (j = 2; j <=i/2; j++)
			if (!(i%j))
				boltop += j;
		if (boltop == i)
			printf("%d mukemmeldir\n",i);
	}
	
	return 0;
}
