#include <stdio.h>
//girilen dizideki max ve min deðeri yazdýrma
int main(){
	
	int n;
	
	printf("dizinizde kac eleman olsun;");
	scanf("%d",&n);
	
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
	
	//max min bulma
	
		if (n == 1) {
		min=x[0];
		max=min;
	}
	else {
	
		max = x[0];
		min = x[0];
		
		for(i = 1 ; i < n ; i++){
			
			if(max < x[i])
				max = x[i];
				
			if(min > x[i])	
				min = x[i];		
		}

	}
		
		
	
	//************************
	
	printf("\nbuyuk %d\nkucuk %d",max,min);
	
	return 0;
}
