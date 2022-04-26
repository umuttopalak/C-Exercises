#include <stdio.h>

int main() {
	
	char simdiki, onceki;
	char enuzun;
	
	int enbuyukuzunluk = 0, simdikiuzunluk = 0;
	
	printf("Karakter dizisi gir: \n");
	scanf("\n%c",&simdiki);
	onceki = simdiki;
	
	while (onceki != '!') {
		if (onceki == simdiki)
			simdikiuzunluk++;
		else {
			if (simdikiuzunluk >= enbuyukuzunluk && onceki >= 'a' && onceki <= 'z') {
				enbuyukuzunluk = simdikiuzunluk;
				enuzun = onceki;
				printf("%c kucuk harfi %d kere art arda goruldu\n", enuzun,enbuyukuzunluk);
			}
			simdikiuzunluk = 1;
		}
		onceki = simdiki;
		scanf("%c",&simdiki);
	}
	
/*	printf("%c kucuk harfi %d kere art arda goruldu\n", enuzun,enbuyukuzunluk);*/
		
	return 0;
}
