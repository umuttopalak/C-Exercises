#include <stdio.h>

int main() {
	
	int sayi, n = 0;
	int toplam = 0;
	
	while (1) {
		printf("Sayi gir: ");
		scanf("%d",&sayi);
		
		if (sayi < 0)
			break;
			
		toplam += sayi;
		n++;
		
	}
	
	if (n == 0)
		printf("Negatif olmayan sayi yoktu\n");
	else
		printf("Ortalama= %.2f\n",(float)toplam/n);
		
	return 0;
}
