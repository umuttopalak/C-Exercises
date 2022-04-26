#include <stdio.h>

int main() {
	
	int sayi1,sayi2,sayi3;
	float ort;
	int min,max;
	
	printf("Sayilari gir: ");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	ort = (sayi1+sayi2+sayi3)/3.0;
	
	if (sayi1 < sayi2) {
		min = sayi1;
		max= sayi2;
	}
	else {
		min = sayi2;
		max = sayi1;
	}
	
	if (sayi3<min)
		min = sayi3;
	else if (sayi3>max)
		max = sayi3;
	   
	
	printf("Min = %d Max = %d Ortalama = %.2f\n",min,max,ort);
	
	return 0;
}
