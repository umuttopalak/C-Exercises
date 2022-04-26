#include <stdio.h>

int main() {
	
	char kar;
	int n = 0;
	
	printf("Karakter gir: ");
	scanf("\n%c",&kar);
	
	while (kar != '*') {
		
		if (kar >= 'a' && kar <= 'z')
			n++;
		
		printf("Karakter gir: ");
		scanf("\n%c",&kar);
	}
	
	printf("%d tane kucuk harf var\n",n);
	
	return 0;
}
