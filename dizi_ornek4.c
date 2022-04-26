#include <stdio.h>

int main(){

	int i,sayi;
	int toplam = 0;
	
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	int sayilar[sayi];

	for(i = 0 ; i < sayi ; i++){
		
		printf("%d. sayi:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	printf("Girdiginiz sayilar;\n");
	
	for(i = 0 ; i < sayi ; i++){
		
		printf("\t%d",sayilar[i]);
		toplam += sayilar[i];
		
	}

	printf("\nGirdiginiz sayilarin toplami: %d",toplam);
	
	return 0
;}
