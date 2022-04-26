#include <stdio.h>

int main() {
	
	char buyukharf;
	char kucukharf;
	
	printf("Buyuk harf gir: ");
	scanf("%c",&buyukharf);
	
	kucukharf = buyukharf + 'a' - 'A';
	
	printf("%c'nin kucugu %c'dir\n",buyukharf,kucukharf);
	
	
	
	return 0;
}
