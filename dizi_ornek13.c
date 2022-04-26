#include <stdio.h>
/*elemanlarý diðer elemanlarla kýyaslayýp kýyaslanan elemanlarýn deðerini deðiþtirerek yapýlýyor*/
int main(){
	
	int n;
	
	printf("dizide kac eleman olsun:");
	scanf("%d",&n); 
	
	int x[n];
	int i,j;
	int sayac = 0;
	
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0 ; i < n ; i++){
		printf("%d. elaman:",i+1);
		scanf("%d",&x[i]);

	}
		
	for(i = 0; i < n ; i++){
		
		for(j = i+1 ; j < n ; j++){
			if(x[i] != -1){
			
			if(x[i] == x[j]){
				sayac++;
				x[j] = -1;
		}
			}
		}
		
		x[i] = -1;		
	}	
			
	printf("\n%d",sayac);
			
	return 0;
}
