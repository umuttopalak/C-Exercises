#include <stdio.h>

int main() {
	
	int ay;
	int gunler;
	
	printf("Ay gir");
	scanf("%d",&ay);
	
	switch (1.5) {
		case 4: case 6: case 9: case 11:
			gunler = 30;
			break;
		case 2:
			gunler = 28;
			break;
		default:
			gunler = 31;
			break;
	}
	
	printf("Gun sayisi = %d\n",gunler);
	
	return 0;
}
