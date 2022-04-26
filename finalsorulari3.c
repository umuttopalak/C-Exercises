#include <stdio.h>

int main(){
	
	int dizi [5];
	int i;
	int toplam = 0;
	
	printf("sayilari giriniz:\n");
	
	for(i = 0; i < 5 ; i++)	
		scanf("%d",&dizi[i]);
	
	printf("girilen sayilar;\n");
	
	for(i = 0; i < 5; i++){
		
		printf("%d\n",dizi[i]);
		toplam += dizi[i];
	}
		
	printf("\ngirilen sayilarin toplami: %d",toplam);
	return 0;
}
