#include <stdio.h>
#define KUCUK 0.000001

int main() {
	
	float x,y;
	char islec;
	
	printf("Islem gir: ");
	scanf("%f%c%f",&x,&islec,&y);
	
	if (islec == '+')
		printf("%.2f + %.2f = %.2f\n",x,y,x+y);
	else if (islec == '-')
		printf("%.2f - %.2f = %.2f\n",x,y,x-y);
	else if (islec == '*')
		printf("%.2f * %.2f = %.2f\n",x,y,x*y);
	else if (islec == '/') {
		if (y > KUCUK || y < -1*KUCUK)
			printf("%.2f / %.2f = %.2f\n",x,y,x/y);
		else
			printf("Sifira bolme hatasi\n");
	}
	else
		printf("Tanimlanmamis islem\n");
	
	return 0;
}
