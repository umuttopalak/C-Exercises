#include <stdio.h>

int main() {
	
	int sayi, toplam = 0, n;
	int i = 0;
	
	printf("Kac tane sayi var: ");
	scanf("%d",&n);
	
	while (i<n) {
		printf("Sayi gir: ");
		scanf("%d",&sayi);
		toplam+= sayi;
		i++;
	}
	
	printf("Ortalama = %.2f\n",(float)toplam/n);
	
	return 0;
}
