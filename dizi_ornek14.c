#include <stdio.h>

int main(){
	
	int n;
	int i;
	int j;
	int sayac = 0;
	
	printf("dizide kac eleman olsun:");
	scanf("%d",&n);
	
	int x[n];
	
	printf("dizinin elemanlarini giriniz;\n");
	for(i = 0 ; i < n ; i++){
		
		printf("\n%d. eleman:",i+1);
		scanf("%d",&x[i]);
	}
	
	for(i = 0; i < n ; i++){
		sayac = 0;
		for(j = i+1 ; j < n ; j++){
			if(x[i] != -1){
			
				if(x[i] == x[j]){
				
				sayac++; 
				x[j] = -1;
				}
			}
		}
		if(sayac > 0)
			x[i] = -1;
	}	

	printf("\ndizideki essiz elemanlar;\n");
	for(i = 0 ; i < n ; i++){
		if(x[i] != -1)
			printf("%d\n",x[i]);
	}		
	

	return 0;
}
