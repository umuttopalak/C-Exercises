#include <stdio.h>

int main() {
	
	int sayi;
	int boltoplam = 1;
	int i;
	
	printf("Sayi gir: ");
	scanf("%d",&sayi);
	
	for (i=2; i<= sayi/2; i++)
		if (sayi%i == 0)
			boltoplam += i;
			
	if (sayi== boltoplam)
		printf("Mukemmel\n");
	else
		printf("Mukemmeldegil\n");		
	
	return 0;
}
