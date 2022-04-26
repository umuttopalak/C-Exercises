#include <stdio.h>

int main() {
	
	int puan;
	char harf = 'F';
	
	printf("Puan gir: ");
	scanf("%d",&puan);
	
	if (puan < 0 || puan > 100)
		printf("Hatali girdi\n");
	else {
		if (puan >= 90)
			harf = 'A';
		else if (puan >= 80)
			harf = 'B';
		else if (puan >= 70)
			harf = 'C';
		else if (puan >= 60)
			harf = 'D';
			
		printf("Harf notu = %c\n",harf);	
			
	}
	
	return 0;
}
