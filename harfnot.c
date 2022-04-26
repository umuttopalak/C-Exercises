#include <stdio.h>

int main() {
	
	int puan;
	char harf;
	
	printf("Puan gir: ");
	scanf("%d",&puan);
	
	if (puan < 0 || puan >100)
		printf("Gecersiz puan\n");
	else {
		switch (puan/10)  {
			case 9: case 10:
				harf = 'A';
				break;
			case 8:
				harf = 'B';
				break;
			case 7:
				harf = 'C';
				break;
			case 6:
				harf = 'D';
				break;
			default:
				harf = 'F';
				break;
		}	
		printf("Nounuz = %c\n",harf);
	}
	
	return 0;
}
