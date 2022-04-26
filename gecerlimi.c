#include <stdio.h>

int main() {
	
	char c;
	int gecersiz = 0;
	int sayi = 0;
	
	printf("Girdin nedir: \n");
	scanf("%c",&c);
	
	while (c != ' ' && c != '\t' && c != '\n') {
		if (c < '0' || c > '9') {
			gecersiz = 1;
			break;
		}
		
		sayi = sayi*10 + c - '0';
		
		scanf("%c",&c);
	}
	
	if (gecersiz)
		printf("Gecersiz sayi\n");
	else
		printf("Sayi = %d\n",sayi);
	
	return 0;
}
