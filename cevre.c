#include <stdio.h>

int main() {
	
	int n;
	float cevre = 0.0;
	float kenar;
	
	printf("Cokgen kac kenarli: ");
	scanf("%d",&n);
	
	if (n < 3)
		printf("Cokgen icin az kenar\n");
	else {
		do {
			do {
				printf("Kenar gir: ");
				scanf("%f",&kenar);
				if  (kenar < 0.000001)
					printf("Kenar uzunlugu kucuk\n");
			} while (kenar < 0.000001);
			cevre += kenar;
			n--;
		} while (n > 0);
		
		printf("Cevre = %.2f\n",cevre);
		
	}
	
	return 0;
}
