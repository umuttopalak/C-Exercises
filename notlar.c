#include <stdio.h>

int main() {
	
	int puan;
	
	printf("Not gir: ");
	scanf("%d",&puan);
	
	if (puan >=60)
		printf("Gecti\n");
	else if (puan >= 50)
		printf("Butunleme\n");
	else
		printf("Kaldi\n");
	
	return 0;
}
