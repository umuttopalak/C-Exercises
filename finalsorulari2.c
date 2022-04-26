#include <stdio.h>

int main(){
	
	int A[10] =  {3,3,3,3,3,3,3,3,3,3};
	int i,j;
	int sayac;
	
	for(i = 0; i < 10; i++){
		
		if (A[i] != -1){
			
			sayac = 1; 
			
		for(j = i + 1 ; j < 10; j++){
			
			if(A[i] == A[j]){
				sayac++;
				A[j] = -1;
			}
		}	
			
		if(sayac > 1)
			printf("%d elemani %d kere tekrar edildi\n",A[i],sayac);	
		A[i] = -1;	
			
		}
		
		
		
	} 
	
	return 0;
}
