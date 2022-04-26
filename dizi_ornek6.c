#include <stdio.h>

int main(){
	
	int j,i,sayi;
	int sayac;
	int son;
	
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	int sayilar[sayi];
	

	for(i = 0 ; i < sayi ; i++){
		
		printf("%d. sayi:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	for(i = 0 ; i < sayi ; i++){
		
		for(j = 0 ; j <sayi ; j++){
			
			if(sayilar[j] == sayilar[i+1]) {
				
					sayac++;
					
			}
			
		}
	}
	
	printf("Verdiginiz dizide %d tane ikilenmis eleman bulundu.",sayac);
	
	return 0;
}
