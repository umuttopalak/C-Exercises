#include <stdio.h>

int main(){
	
	float toplam = 0.0;
	int sayi;
	float sayac = 0.0;
	
	while (1){
		
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		
		if(sayi <= 0)
			break;
			
		else{
			
			toplam += sayi;
			sayac++;
		}
		 
	}
	printf("Girdiginiz sayilarin ortalamasi: %.2f",toplam/sayac);
	
	return 0;
}
