#include <stdio.h>

int main(){
	
	int sayac;
	int i,j,sayi;
	int toplam = 0;
	int mm = 1;
	
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	int sayilar[sayi];

	for(i = 0 ; i < sayi ; i++){
		
		printf("%d. sayi:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	int dizi1[sayi];
	int dizi2[sayi];
	
	for (i = 0 ; i < sayi ; i++){
		
		dizi1[i] = sayilar[i];
		dizi2[i] = 0;
		
	}
	
	for (i = 0 ; i < sayi ; i++){
		
		for (j = 0 ; j < sayi ; j++){
			
			if (dizi1[j] == sayilar[j]){
				
				dizi2[i] = mm;
				mm++;
			}
			
		}
		
		mm = 1;
		
	}
	
	for ( i = 0; i < sayi ; i++){
		
		if (dizi2[i] == 2)
			sayac++;
	
	}
	
	printf("verdiginiz dizide tekrarlayan %d eleman vardir.",sayac);
	return 0;
}
