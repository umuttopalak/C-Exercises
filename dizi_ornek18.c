#include <stdio.h>

int main(){

	int n;

	printf("dizinizde kac eleman olsun;");
	scanf("%d",&n);
	
	int i,j;
	int x[n];
	int takas;
	
	//dizi tanýmlama
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0; i < n; i++){
		
		printf("\n%d. eleman:",i+1);
		scanf("%d",&x[i]);
	}
	//************************
	//dizideki elemanlarý küçükten büyüðe sýralama
	
	
	for(i = 0; i < n ; i++){
		
		for(j =i + 1 ; j < n ; j++){
				
				if(x[i] > x[j]){
					
					takas = x[i];
					x[i] = x[j];
					x[j] = takas;
				}
				
			}
			
	}
	
	printf("\n");
	for(i = 0; i < n; i++)
		printf("%d\t",x[i]);
	
	
	
	//************************
	
	
	return 0;
}
