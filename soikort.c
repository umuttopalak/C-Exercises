#include <stdio.h>

int main() {
	
	int sayi, onceki;
	float toplam = 0;
	int n = 0;
	
	printf("Sayi gir: ");
	scanf("%d",&sayi);
	onceki = sayi;
	
	while (sayi != 2*onceki) {
		n++;
		toplam += sayi;
		onceki = sayi;
		printf("Sayi gir: ");
		scanf("%d",&sayi);
	}
	
	printf("Ortalama = %.2f",toplam/n);
	
	return 0;
}
