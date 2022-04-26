#include <stdio.h>

int main(){
	
	int i ;
	float toplam = 0.0;
	float sayi[5];
	int sayac = 0;
	for(i = 0; i < 5; i++){
		
	printf("sayi giriniz:");
	scanf("%f",&sayi[i]);
	toplam += sayi[i];
	sayac++;	
	
	}
	printf("%.2f\n",toplam);
	printf("aritmetik ortalama: %.2f",toplam/5.0);
	
	return 0;
}
