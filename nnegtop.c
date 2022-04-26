#include <stdio.h>

int main() {
	
	int top = 0, n = 0;
	int sayi;
	
	do {
		printf("Sayi gir: ");
		scanf("%d",&sayi);
		
		if (sayi <= 0)
			continue;
		
		top += sayi;
		n++;	
		
	} while (sayi != 0);
	
	if (n == 0)
		printf("0dan farkli hic sayi yok\n");
	else
		printf("Ortalama = %.2f\n", (float)top/n);
	
	
	return 0;
}
