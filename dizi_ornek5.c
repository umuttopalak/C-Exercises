#include <stdio.h>

int main(){
	
	int i,sayi;
	
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	int sayilar[sayi];
	int sayilar2[sayi];

	for(i = 0 ; i < sayi ; i++){
		
		printf("%d. sayi:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	printf("ilk dizideki bilgiler ikiye aktariliyor...");
	
	for (i = 0; i < sayi; i++){
		
		sayilar2[i] = sayilar[i];
		
	}
	
	printf("\nAktarim tamamlandi.\nilk dizi;\n");
	
	for(i = 0 ; i < sayi ; i++){
		
		printf("\t%d",sayilar2[i]);
		
	}
	
	printf("\nikinci dizi;\n");
	
	for(i = 0 ; i < sayi ; i++){
		
		printf("\t%d",sayilar[i]);

		
	}
	
	
	return 0;
}
