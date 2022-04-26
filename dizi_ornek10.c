#include <stdio.h>

int main(){
	
	int i;
	int n;
	printf("kac eleman girmek istiyorsunuz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0; i < n ; i++){
		printf("%d. eleman:",i+1);
		scanf("%d",&dizi[i]);
		
	}
		
	printf("\ndizinin elemanlari;\n");
	for(i = 0; i < n ; i ++)
		printf("%d\t",dizi[i]);
	
	printf("\ndizinin tersten elemanlari;\n");
	for(i = n-1 ; i >= 0; i--)
		printf("%d\t",dizi[i]);
	
	return 0;
}
