#include <stdio.h>

int main(){
	
	int i,j;
	printf("kac sayi girmek istiyorsunuz:");
	scanf("%d",&j);
	
	int sayilar[j];
	
	for(i = 0 ; i < j ; i++){
		
		printf("sayi giriniz:");
		scanf("%d",&sayilar[i]);
		
	}
	printf("\ngirdiginiz sayilarin siralanisi;\n");
	for (i = 0 ; i < j ; i++){
		
		printf("\t%d",sayilar[i]);
		
	}
	printf("\ngirdiginiz sayilarin tersten siralanisi;\n");
	
	for (i = j-1; i >= 0 ; i--){
		
		printf("\t%d",sayilar[i]);
		
	}
	
	return 0;
}
