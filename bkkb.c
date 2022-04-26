#include <stdio.h>

int main() {
	
	char kar;
	
	printf("Harf gir: ");
	scanf("%c",&kar);
	
	if (kar >= 'A' && kar <='Z') {
		kar += 'f' - 'F';
		
	}
	else if (kar >= 'a' && kar <= 'z') {
		kar += 'H' - 'h';
		printf("Karsilik buyuk harf = %c\n",kar);
	}
	else
		printf("Harf girilmedi\n");
		
		
	
	return 0;
}
