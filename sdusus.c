#include <stdio.h>
#define g 9.81

int main() {
	
	float h0, h;
	int t = 0;
	
	printf("Ilk yukseklik: ");
	scanf("%f",&h0);
	
	h = h0;
	
	while (h > 0) {
		printf("%d. saniye = %.2f\n",t,h);
		t++;
		h = h0 - 0.5*g*t*t;
	}
	
	printf("Cisin dustu artik\n");
	
	return 0;
}
