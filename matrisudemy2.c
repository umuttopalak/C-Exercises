#include <stdio.h>

int main(){
	
	int matris[3][3];
	int i , j;
	
	printf("matrisi doldurunuz!\n");
	
	for(i = 0 ; i < 3 ; i++){
		
		for(j = 0; j < 3 ; j++){
			scanf("%d",&matris[i][j]);
		}
		
	}
	
	printf("girdiginiz matris;\n");
	for( i = 0; i < 3 ; i++){
		
		for(j = 0 ; j < 3 ; j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
