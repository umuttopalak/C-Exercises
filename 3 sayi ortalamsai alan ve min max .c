#include <stdio.h>

int main(){
	
	int s1,s2,s3;
	printf("uc sayi giriniz:");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	int min;
	int max;
	
	printf("ortalama: %.2f\n",(s1+s2+s3)/3.0);
	
	if (s1 < s2){
		
		min = s1;
		max = s2;
	}
	
	else{
		min = s2;
		max = s1;
	}
	
	if (max < s3){
		max = s3;
	}
	
	else if (s3 < min)
		min = s3;
		
	printf("\nEn kucuk sayi: %d",min);
	printf("\nEn buyuk sayi: %d",max);
	
	return 0;
}
