#include <stdio.h>

int main(){
	
	int n;
	int t = 0,c = 0;
	
	printf("dizinizde kac eleman olsun;");
	scanf("%d",&n);
	
	int tek[n],cift[n];
	int i,j,k;
	int x[n];
	int max,min;
	
	//dizi tanýmlama
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0; i < n; i++){
		
		printf("\n%d. eleman:",i+1);
		scanf("%d",&x[i]);
	}
	//************************
	//tek ve cift sayilari dizilere böldüm
	for(i = 0 ; i < n ; i++){
		
		if(x[i] % 2 == 0){
			cift[c] = x[i];
			c++;
		}
		
		else{
			tek[t] = x[i];
			t++;
		}
		
	}
	//************************
	//tek ve çift sayýlar dizilerini yazdýrma
	printf("\n");
	
	printf("girdiginiz dizideki cift sayilar;\n");
	for(i = 0; i < c ; i++){
				
		printf("%d\t",cift[i]);
}
	printf("\ngirdiginiz dizideki tek sayilar;\n");
	for(i = 0; i < t; i++){
		
		printf("%d\t",tek[i]);
	}
		
	
	//************************	
	
	return 0;
}
