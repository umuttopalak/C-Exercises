#include <stdio.h>

int main () {
	
	int sayi;
	int toplam = 0;
	int n = 0;
	
	printf("Sayi gir: ");
	scanf("%d",&sayi);
	
	while (sayi>=0) {
		toplam += sayi;
		n++;
		printf("Sayi gir: ");
		scanf("%d",&sayi);
	}
	
	if (n == 0)
		printf("Hic sayi okuyamadik\n");
	else
		printf("Ort = %.2f",(float)toplam/n);
	
	
	return 0;
}
