#include <stdio.h>
#define PI 3.14

int main() {
	
	float a, b;
	char secim;
	
	printf("Ne istiyosun?: ");
	scanf("%c", &secim);
	
	switch (secim) {
		case 'k':case 'K':
			printf("Karenin kenari: ");
			scanf("%f",&a);
			printf("Alan = %.2f",a*a);
			break;
		case 'd': case 'D':
			printf("Dikdortgenin kenarlari: ");
			scanf("%f%f",&a,&b);
			printf("Alan = %.2f",a*b);
			break;
		case 'c': case 'C':
			printf("Cemberin yaricapi: ");
			scanf("%f",&a);
			printf("Alan = %.2f",PI*a*a);
			break;
		default:
			printf("Bilinmeyen sekil\n");
			break;
	}
	
	return 0;
}
