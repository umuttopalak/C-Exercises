#include <stdio.h>

int main(){
	
	int i = 0;
	int sayi[10];


	for (i = 0; i < 10; i++){
		
		printf("%d. sayi:",i+1);
		scanf("%d", &sayi[i]);
		
	}	
	
	printf("Girdiginiz sayilar;");
	
	for( i = 0; i < 10; i++){
		
		printf("\n%d",sayi[i]);
	
	}
	
	return 0;
}
