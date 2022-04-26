#include <stdio.h>

int main() {
	
	int n;
	long faktoriyel = 1;
	int i;
	
	printf("Sayi gir: ");
	scanf("%d",&n);
	
	for (i=n; i>1; i--)
		faktoriyel *= i;
	
	printf("%d! = %ld\n",n,faktoriyel);
	
	return 0;
}
