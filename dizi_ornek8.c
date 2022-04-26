#include <stdio.h>

int main(){
	
	int sayi;
	int i,j;
	int eleman;
	int k = 0;
	
	printf("Kac tane sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	dizi1[sayi];
	dizi2[sayi];
	dizi3[sayi];
	
	for (i = 0 ; i < sayi ; i++){
		
		printf("%d. sayiyi giriniz:",i + 1);
		scanf("%d",&dizi1[i]);
		
	}
																						
	for (i = 0 ; i < sayi ; i++){
		
		if(dizi1[i] == dizi[i+1]){
		
			dizi1[i] = dizi2[k];
			k++;
			}
		
		
	}
	
	
	
	return 0;
}
