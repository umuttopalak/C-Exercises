#include <stdio.h>
#include <math.h>

int main () {
	
	float a,b,c,kok1,kok2,delta;
	
	printf("Katsayilari gir: ");
	scanf("%f%f%f",&a,&b,&c);
	
	delta = b*b - 4*a*c;
	
	if (a == 0.0)
		printf("Denklen ikinci derece degil\n");
	else if (delta < 0)
		printf("Gercek kok yok\n");
	else if (delta > 0) {
		kok1 = ((-1*b)+sqrt(delta))/(2*a);
		kok2 = ((-1*b)-sqrt(delta))/(2*a);
		printf("Iki kok var:\n");
		printf("Kok1 = %.2f Kok2 = %.2f\n",kok1,kok2);
	}
	else {
		kok1 = (-1*b)/(2*a);
		printf("Bir kok var:\n");
		printf("Kok1 = %.2f\n",kok1);
	}
	
	return 0;
}
