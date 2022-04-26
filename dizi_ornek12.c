#include <stdio.h>
#define n 15
int main(){
	
	int dizi1[n];
	int dizi2[n];
	
	int n;
	int i;
	
	printf("dizinizde kac eleman olsun:");
	scanf("%d",&n);
	
	printf("dizinin elemanlarini giriniz;");
	for(i = 0; i < n ; i++){
		printf("\n%d. eleman:",i+1);
		scanf("%d",&dizi1[i]);
	}
	/*ilk diziyi yazdýrma*/
	printf("\nIlk dizi;\n");
	for(i = 0; i < n; i++)
		printf("%d\t",dizi1[i]);
	
	
	/*diðer diziye aktarma ve  yazdýrma*/
	printf("\nikinci dizi;\n");
	for(i = 0; i < n ; i++){
		dizi2[i] = dizi1[i];
		printf("%d\t",dizi2[i]);
	}
			
	
	return 0;
}
