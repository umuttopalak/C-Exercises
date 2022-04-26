#include <stdio.h>
#define pi 3.14159

int main(){
	
	float r, h;
	char secim;
	
	do {
		printf("Yaricap ve yukseklik gir: ");
		scanf("%f%f",&r,&h);
		printf("Silindir hacim = %.2f\n",pi*r*r*h);
		printf("Baska hesaplama? (q/Q) sonlandirir: ");
		scanf("\n%c",&secim);
		
	} while (secim != 'q' && secim != 'Q');
	
	return 0;
}



