#include <stdio.h>

int main() {
	
	float a,b, gecici;
	printf("�ki reel sayi gir: ");
	scanf("%f%f",&a,&b);
	gecici = a;
	a = b;
	b = gecici;
	printf("a = %.2f ve b = %.2f\n",a,b);
	
	
	
	return 0;
}
