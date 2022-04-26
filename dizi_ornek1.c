#include <stdio.h>

int main(){
	
	int girilecekSayi;
	
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d", &girilecekSayi);
	
	
	float ortalama = 0.0;
	int x[girilecekSayi+1];
	int i;
	int sayi;
	
	for (i = 0; i < girilecekSayi ; i++){
		
		printf("%d. sayiyi giriniz:", i + 1);
		scanf("%d",&sayi);
		x[i] = sayi;	
		
		ortalama += sayi;
		
	}
	
	int j;
	printf("girdiginiz sayilar;");

	for (j = 0 ; j < girilecekSayi ; j++){
		
		printf("\n%d",x[j]);
		
	}
	
	printf("\nsayilarin ortalamasi : %.2f", ortalama/girilecekSayi);
	
	return 0;
}
