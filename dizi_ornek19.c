#include <stdio.h>

int main(){

	int n;

	printf("dizinizde kac eleman olsun;");
	scanf("%d",&n);
	
	int i,j;
	int x[n+1];
	int takas;
	
	//dizi tanýmlama
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0; i < n; i++){
		
		printf("\n%d. eleman:",i+1);
		scanf("%d",&x[i]);
	}
	//************************
	int girilecekSayi;
	printf("ekleyeceginiz sayiyi giriniz");
	scanf("%d",&girilecekSayi);
	
	//************************
	
	for(i = 0 ; i < n ; i++){
		
		for(j = i+1 ; j < n ; j++){
			
			if(x[i] > x[j]){
				
				takas = x[i];
				x[i] = x[j];
				x[j] = takas;
			}
		}
		
	}
	
	for(i = 0 ; i < n+1 ; i++){
		
		for(j = i + 1 ; j < n + 1 ; j++){
			
			if(x[j] < girilecekSayi && x[i] > girilecekSayi){
				
				takas = x[j+1];
				x[j+1] = x[j];
				x[i] = girilecekSayi;
				 
			}
		}
	}
	
	
	
	return 0;
}
