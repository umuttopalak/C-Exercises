#include <stdio.h>

int main(){
	
	int i;
	int n;
	printf("kac eleman girmek istiyorsunuz:");
	scanf("%d",&n);
	
	int dizi[n];	
	float toplam = 0.0;
	
	printf("\ndizinin elemanlarini giriniz;\n");
	for(i = 0; i < n ; i++){
		scanf("%d",&dizi[i]);
		toplam += dizi[i];
		
	}

	printf("\ngirdiginiz dizenin toplami: %.2f",toplam);
	
	return 0;
}
