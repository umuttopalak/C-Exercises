#include <stdio.h>

int main() {
	
	int sayac = 0;
	int puan;
	
	printf("1. ogrenci notu: ");
	scanf("%d",&puan);
	
	if (puan >= 60) {
		printf("1. ogrenci gecti\n");
		sayac++;
	}
	else
		;
		
	printf("2. ogrenci notu: ");
	scanf("%d",&puan);	
		
	if (puan >= 60) {
		printf("2. ogrenci gecti\n");
		sayac++;
	}
	else
		;
		
	printf("3. ogrenci notu: ");
	scanf("%d",&puan);	
		
	if (puan >= 60) {
		printf("3. ogrenci gecti\n");
		sayac++;
	}
	else
		;
	
	printf("Toplam basarili sayisi = %d\n",sayac);
	printf("Toplam basarisiz sayisi = %d\n",3-sayac);

	
	return 0;
}
