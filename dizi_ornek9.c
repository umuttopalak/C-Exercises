#include <stdio.h>

int main(){
	
	int dizi[10];
	int i;
	
	for(i = 0 ; i < 10 ; i++){
		
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i = 0; i < 10 ; i ++)
		printf("%d\t",dizi[i]);
	
	
	
	return 0;
	
}
