#include <stdio.h>

int main(){
	int j,i;
int matris[3][3] = {{0,2,3},{7,5,6},{6,2,1}};

for(i = 0 ; i < 3 ; i++){
	
	for(j = 0; j < 3 ; j++){
		printf("%d\t",matris[i][j]);
	}
		
	printf("\n");
}	
	
	
	
	return 0;
}
