#include <stdio.h>

int main(){
	
	int i;
	int eleman;
	int dizi[5];
	
	printf("dizinin elemanlari:");
	for (i = 0; i < 5 ; i++)
		scanf("%d",&dizi[i]);
		
	printf("kacinci elemani gostermek istiyorsunuz;\n");
	scanf("%d",&eleman);
	
	printf("%d",dizi[eleman]);
	
	
	return 0;
}
