#include <stdio.h>

int main(){
	
	int n;
	
	printf("dizinizde kac eleman olsun;");
	scanf("%d",&n);
	
	int i,j;
	int x[n];
	int sayac = 1;
	int sayi;
	
	//dizi tanýmlama
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0; i < n; i++){
		
		printf("\n%d. eleman:",i+1);
		scanf("%d",&x[i]);
	}
	//************************
	
	//dizinin elemanlarýný tarama
	
	for(i = 0 ; i < n ; i++){
		
		if(x[i] != -1){
		
			for(j = i + 1 ; j < n ; j++){
				
				sayi = x[i];
				if(sayi == x[j]){
					
					sayac++;
					x[j] = -1;
				} 	
				
			}
			if(sayac > 1)
					printf("\n%d sayisi %d kere tekrar etti",sayi,sayac);	
				sayac = 1;
				x[i] = -1;
		}
		
	}

	
	//************************
	return 0;
}
