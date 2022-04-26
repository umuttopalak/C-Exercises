#include <stdio.h>

int main() {
	
	int min = 0, max = 0;
	int sayi;

	do {
		printf("Sayi gir: ");
		scanf("%d",&sayi);
		
		if (sayi == 0)
			break;
			
		if (sayi > max)
			max = sayi;
		else if (sayi < min)
			min = sayi;	

	} while (1);	
	
	printf("Min = %d Max = %d\n",min, max);
	
	
	return 0;
}
