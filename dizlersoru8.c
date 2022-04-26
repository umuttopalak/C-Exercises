#include <stdio.h>

int main(){
	
	int sayi;
	printf("diziye kac eleman eklemek istiyorsunuz:");
	scanf("%d",&sayi);
	
	int dizi2[sayi];
	int dizi[sayi];
	int i;
	
	for (i = 0; i < sayi ; i++){
		
		printf("%d. sayiyi giriniz:",i);
		scanf("%d",&dizi[i]);
		
	}
	
	int silinecek;
	
	printf("kacinci elemani silmek istiyorsun:");
	scanf("%d",&silinecek);

	for ( i = 0 ; i < sayi ; i++){
		
		if (silinecek == i )
			continue;
			
		else
			dizi2[i] = dizi[i];

					
	}
	
	printf("\nyeni dizi;\n");
	
	for (i = 0 ; i < sayi ; i++){
		
		printf("%d\t",dizi2[i]);
	}
	
	return 0;
}
