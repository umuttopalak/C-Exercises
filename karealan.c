#include <stdio.h>

int main () {
	
	float a;
	char secim;
	
	do {
		printf("Kenar gir: ");
		scanf("%f",&a);
		printf("Alan = %.2f\n",a*a);
		printf("Devam? (q veya Q sonlandirir): ");
		scanf("\n%c",&secim);
		
	} while (secim != 'q'  && secim != 'Q');
	
	return 0;
}
