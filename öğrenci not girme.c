#include <stdio.h>
#include <string.h>

struct ogrenciler{
	
	char isim[10];
	char soyisim[10];
	int puan;
	
	
};

struct ogrenciler2{
	
	char isim[10];
	char soyisim[10];
	int puan;
	
	
};



int main(){

	int j;
	int i ;
	int sayac = 0;
	int sayi;
	
	printf("kac ogrenci gireceksiniz:");
	scanf("%d",&sayi);
	
	struct ogrenciler ogrenci[sayi];
	struct ogrenciler2 ogrenci[sayi];
	
	for (i = 0; i < sayi; i++){
		
		printf("Ogrencinin adi:");
		scanf("%s",&ogrenci[i].isim);
		printf("\nogrencinin soyismi:");
		scanf("%s",&ogrenci[i].soyisim);
		printf("\nogrencinin notu:");
		scanf("%s",&ogrenci[i].puan);
		sayac++;
	
	}
	
	int i = 0;
	int j = 0;	
	while(i < sayi){
	
		for(){ //büyüðü bulma
			
					
			
			
			
			
			
			
			
		}
	
	
	
	
	
	}
	
	return 0;
}
