#include <stdio.h>
#include <string.h>

int main(){
	
	char dizi[5];
	int i;
	
	printf("dizinin elamanlarini giriniz;");
	for(i = 0; i < 5 ; i++)
		scanf("\n%c",&dizi[i]);
		
	printf("dizinin ilk hali;\n");
	for(i = 0; i < 5 ; i++)
		printf("%c\t",dizi[i]);
		
	strrev(dizi);	
		
	printf("\ndizinin son hali;\n");
	for(i = 0; i < 5 ; i++)
		printf("%c\t",dizi[i]);
			
		
	
	return 0;
}
